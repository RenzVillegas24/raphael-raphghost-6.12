// SPDX-License-Identifier: GPL-2.0-only
/*
 * Xiaomi Raphael Smoke Test & Hardware Watchdog Reboot Driver
 *
 * Provides early bringup verification by restarting the system
 * after a specified timeout via cmdline:
 *   raphael.smoke_reboot=<seconds>
 *   raphael.smoke_reboot_cmd=<command_string>
 */

#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/workqueue.h>
#include <linux/reboot.h>

#define RAPHAEL_SMOKE_CMD_MAX 32

static unsigned int raphael_smoke_secs;
static char raphael_smoke_cmd[RAPHAEL_SMOKE_CMD_MAX];
static struct delayed_work raphael_smoke_reboot_work;

static int __init raphael_smoke_reboot_setup(char *str)
{
	int ret;

	ret = kstrtouint(str, 0, &raphael_smoke_secs);
	return (ret == 0);
}
__setup("raphael.smoke_reboot=", raphael_smoke_reboot_setup);

static int __init raphael_smoke_cmd_setup(char *str)
{
	strscpy(raphael_smoke_cmd, str, sizeof(raphael_smoke_cmd));
	return 1;
}
__setup("raphael.smoke_reboot_cmd=", raphael_smoke_cmd_setup);

static void raphael_smoke_reboot_fn(struct work_struct *work)
{
	char *cmd = (raphael_smoke_cmd[0] != '\0') ? raphael_smoke_cmd : NULL;

	pr_emerg("raphael: smoke_reboot: %u s elapsed, restarting %s\n",
		 raphael_smoke_secs, cmd ? cmd : "system");
	kernel_restart(cmd);
}

static int __init raphael_smoke_reboot_init(void)
{
	if (raphael_smoke_secs != 0) {
		pr_info("raphael: smoke_reboot: restarting in %u s\n", raphael_smoke_secs);
		INIT_DELAYED_WORK(&raphael_smoke_reboot_work, raphael_smoke_reboot_fn);
		schedule_delayed_work(&raphael_smoke_reboot_work,
				      msecs_to_jiffies(raphael_smoke_secs * 1000));
	}
	return 0;
}
late_initcall(raphael_smoke_reboot_init);

MODULE_DESCRIPTION("Xiaomi Raphael Smoke Test & Hardware Watchdog Reboot Driver");
MODULE_LICENSE("GPL");
