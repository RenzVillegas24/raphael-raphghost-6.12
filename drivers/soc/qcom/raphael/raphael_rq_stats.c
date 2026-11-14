// SPDX-License-Identifier: GPL-2.0-only
/*
 * Xiaomi Raphael CPU Runqueue Statistics Driver
 *
 * Exposes /sys/devices/system/cpu/cpu0/rq-stats for load tracking
 * and dynamic governor tuning.
 */

#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/cpu.h>
#include <linux/kobject.h>
#include <linux/sysfs.h>
#include <linux/timer.h>
#include <linux/jiffies.h>

static struct kobject *raphael_rq_kobj;
static struct timer_list raphael_rq_timer;
static unsigned int raphael_def_timer_ms = 100;

static ssize_t def_timer_ms_show(struct kobject *kobj,
				  struct kobj_attribute *attr, char *buf)
{
	return scnprintf(buf, PAGE_SIZE, "%u\n", raphael_def_timer_ms);
}

static ssize_t def_timer_ms_store(struct kobject *kobj,
				   struct kobj_attribute *attr,
				   const char *buf, size_t count)
{
	unsigned int val;
	int ret;

	ret = kstrtouint(buf, 0, &val);
	if (ret)
		return ret;

	raphael_def_timer_ms = val;
	if (val)
		mod_timer(&raphael_rq_timer, jiffies + msecs_to_jiffies(val));
	else
		del_timer(&raphael_rq_timer);

	return count;
}
static struct kobj_attribute def_timer_ms_attr = __ATTR_RW(def_timer_ms);

static struct attribute *raphael_rq_attrs[] = {
	&def_timer_ms_attr.attr,
	NULL,
};

static const struct attribute_group raphael_rq_group = {
	.attrs = raphael_rq_attrs,
};

static void raphael_rq_timer_fn(struct timer_list *t)
{
	if (raphael_def_timer_ms)
		mod_timer(&raphael_rq_timer,
			  jiffies + msecs_to_jiffies(raphael_def_timer_ms));
}

static int __init raphael_rq_stats_init(void)
{
	struct device *cpu_dev = get_cpu_device(0);
	int ret;

	if (!cpu_dev)
		return -ENODEV;

	timer_setup(&raphael_rq_timer, raphael_rq_timer_fn, 0);

	raphael_rq_kobj = kobject_create_and_add("rq-stats", &cpu_dev->kobj);
	if (!raphael_rq_kobj)
		return -ENOMEM;

	ret = sysfs_create_group(raphael_rq_kobj, &raphael_rq_group);
	if (ret) {
		kobject_put(raphael_rq_kobj);
		return ret;
	}

	if (raphael_def_timer_ms)
		mod_timer(&raphael_rq_timer,
			  jiffies + msecs_to_jiffies(raphael_def_timer_ms));

	return 0;
}
late_initcall(raphael_rq_stats_init);

MODULE_DESCRIPTION("Xiaomi Raphael CPU Runqueue Statistics Driver");
MODULE_LICENSE("GPL");
