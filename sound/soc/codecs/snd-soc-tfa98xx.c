/*
 * Clean Standalone Extraction: TFA98xx Audio Amplifier Driver
 * Extracted from RaphGhost Kernel 6.12.97 (SM8150 Raphael)
 * Architecture: ARM64
 */

#include <linux/module.h>
#include <linux/i2c.h>
#include <sound/soc.h>

/* ========================================================
 * Function: tfa98xx_remove_misc_device (original: FUN_ffff8000800d3250)
 * ======================================================== */
/* ============ tfa98xx_remove_misc_device  @ ffff8000800d3250  size=136 ============ */

void tfa98xx_remove_misc_device(long param_1)

{
  FUN_ffff8000800f068c(&DAT_ffff8000824ee3c2,s_tfa98xx_remove_misc_device_ffff8000825c3720);
  if (param_1 == 0) {
    FUN_ffff8000800f068c(&DAT_ffff8000823775e8,s_tfa98xx_remove_misc_device_ffff8000825c3720);
    return;
  }
  FUN_ffff800080b0d570(param_1 + 0x348);
  FUN_ffff800080b0d570(param_1 + 0x398);
  FUN_ffff800080b0d570(param_1 + 1000);
  FUN_ffff800080b0d570(param_1 + 0x438);
  FUN_ffff800080b0d570(param_1 + 0x488);
  return;
}





/* ========================================================
 * Function: tfa98xx_read_memtrack_data (original: FUN_ffff8000800d32d8)
 * ======================================================== */
/* ============ tfa98xx_read_memtrack_data  @ ffff8000800d32d8  size=908 ============ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 tfa98xx_read_memtrack_data(long param_1,undefined8 param_2)

{
  ushort uVar1;
  uint5 uVar2;
  undefined5 uVar3;
  uint7 uVar4;
  uint6 uVar5;
  undefined2 uVar6;
  int iVar7;
  long lVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  char cVar12;
  long lVar13;
  long lVar14;
  undefined1 local_54;
  undefined2 local_53;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar8 = sp_el0;
  local_38 = *(long *)(lVar8 + 0x508);
  local_48 = 0;
  local_40 = 0;
  local_50 = 0;
  FUN_ffff8000800f068c
            (&DAT_ffff8000823acef4,s_tfa98xx_read_memtrack_data_ffff800082522a8b,
             *(undefined1 *)(*(long *)(param_1 + 0x2d8) + 0x14),
             *(undefined2 *)(*(long *)(param_1 + 0x2d8) + 0x12));
  FUN_ffff800081e5b5c4(param_1 + 0x1c8);
  lVar8 = *(long *)(param_1 + 0x2d8);
  uVar1 = *(ushort *)(lVar8 + 0x12) & 0xff;
  if (uVar1 == 0x74) {
    lVar14 = 1;
    lVar13 = 2;
  }
  else {
    if (uVar1 != 0x94) {
      FUN_ffff8000800f068c(&DAT_ffff80008235c7f8,s_tfa98xx_read_memtrack_data_ffff800082522a8b);
      uVar11 = 1;
      goto LAB_ffff8000800d33e8;
    }
    lVar14 = 0;
    lVar13 = 3;
  }
  uVar10 = 0x1433;
  if (*(char *)(lVar8 + 0x14) == '\x01') {
    uVar10 = 0xffffffff;
  }
  iVar7 = FUN_ffff800081a4d4e8(lVar8,uVar10);
  if (iVar7 == 9) {
    uVar10 = 0x920;
    if (*(char *)(*(long *)(param_1 + 0x2d8) + 0x14) != '\x01') {
      uVar10 = 0x20;
    }
    iVar7 = FUN_ffff800081a4d4e8(*(long *)(param_1 + 0x2d8),uVar10);
    if (iVar7 != 0) {
      if (*(char *)(*(long *)(param_1 + 0x2d8) + 0x14) == '\x02') {
        local_48 = 0;
        local_40 = 0;
        local_50 = 0;
        if (((*(int *)(*(long *)(param_1 + 0x2d8) + 0x138) != 0) && (1 < _DAT_ffff8000836342b4)) &&
           ((DAT_ffff800083634298 & 1) == 0)) {
          uVar11 = 0;
          DAT_ffff800083634298 = 1;
          goto LAB_ffff8000800d33e8;
        }
        local_48._0_2_ =
             CONCAT11((char)(&DAT_ffff800082924610)[lVar14 * 9],
                      (char)(&DAT_ffff800082924600)[lVar14 * 9]);
        uVar6 = (undefined2)local_48;
        local_48._0_5_ =
             CONCAT14((char)(&DAT_ffff80008292461c)[lVar14 * 9],
                      (&DAT_ffff80008292460c)[lVar14 * 9] << 0x18);
        uVar2 = (uint5)local_48 >> 0x18;
        local_48._0_3_ = CONCAT12((char)((uint)(&DAT_ffff80008292460c)[lVar14 * 9] >> 8),uVar6);
        uVar4 = CONCAT16((char)(&DAT_ffff800082924618)[lVar14 * 9],
                         CONCAT15((char)((uint)(&DAT_ffff800082924618)[lVar14 * 9] >> 8),
                                  (int5)CONCAT53(uVar2,(undefined3)local_48)));
        local_48 = (ulong)uVar4;
        if (_DAT_ffff8000836342b4 < 2) {
          cVar12 = '\t';
        }
        else {
          cVar12 = '\x12';
          local_48 = CONCAT17((char)(&DAT_ffff800082924604)[lVar13 * 9],uVar4);
          local_40._0_4_ =
               (uint)CONCAT11((char)(&DAT_ffff800082924610)[lVar13 * 9],
                              (char)(&DAT_ffff800082924600)[lVar13 * 9]) << 8;
          local_40._0_5_ = CONCAT14((char)(&DAT_ffff80008292460c)[lVar13 * 9],(int)local_40);
          uVar3 = CONCAT41((int)((uint5)(undefined5)local_40 >> 8),
                           (char)((uint)(&DAT_ffff800082924600)[lVar13 * 9] >> 8));
          local_40._0_6_ = CONCAT15((char)(&DAT_ffff80008292461c)[lVar13 * 9],uVar3);
          uVar5 = (uint6)(undefined6)local_40 >> 0x20;
          local_40._0_4_ =
               CONCAT13((char)((uint)(&DAT_ffff80008292460c)[lVar13 * 9] >> 8),(int3)uVar3);
          local_40 = CONCAT17((char)(&DAT_ffff800082924618)[lVar13 * 9],
                              CONCAT16((char)((uint)(&DAT_ffff800082924618)[lVar13 * 9] >> 8),
                                       CONCAT24((short)uVar5,(int)local_40)));
        }
        local_50 = CONCAT26(CONCAT11((char)((uint)(&DAT_ffff800082924600)[lVar14 * 9] >> 8),
                                     (char)(&DAT_ffff800082924604)[lVar14 * 9]),
                            CONCAT15(cVar12,0xb8000));
        FUN_ffff8000800f068c(&DAT_ffff8000825a91a2,s_tfa98xx_read_memtrack_data_ffff800082522a8b);
        if (*(int *)(*(long *)(param_1 + 0x2d8) + 0x138) == 0) {
          iVar7 = FUN_ffff800081a4e6d4(*(long *)(param_1 + 0x2d8),cVar12 + '\x06',&local_50);
          if (iVar7 == 0) goto LAB_ffff8000800d357c;
          puVar9 = &DAT_ffff8000822bcc9b;
        }
        else {
          FUN_ffff8000819ecd94(&local_50,cVar12 + '\x06',0);
          DAT_ffff800083634298 = 0;
          FUN_ffff8000800e4b5c(0x147aeb8);
LAB_ffff8000800d357c:
          lVar8 = *(long *)(param_1 + 0x2d8);
          local_48 = 0;
          local_40 = 0;
          local_50 = 0;
          if (*(int *)(lVar8 + 0x138) == 0) {
            iVar7 = FUN_ffff800081a4e270(lVar8,0,0x8b,cVar12 + '\x03',&local_50);
          }
          else {
            local_54 = *(undefined1 *)(lVar8 + 0x39);
            local_53 = 0x8b80;
            iVar7 = FUN_ffff8000819ecd94(&local_54,3,0);
            if (iVar7 == 0) {
              FUN_ffff8000800e4b5c(0x147aeb8);
              iVar7 = FUN_ffff8000819ecd94(&local_50,4,1);
              iVar7 = (uint)(iVar7 != 0) << 1;
            }
            else {
              iVar7 = 2;
            }
          }
          FUN_ffff8000800f068c
                    (&DAT_ffff80008253d788,s_tfa98xx_read_memtrack_data_ffff800082522a8b,iVar7);
          if (iVar7 == 0) {
            FUN_ffff800081a4e380(cVar12,(ulong)&local_50 | 3,param_2);
            uVar11 = 0;
            goto LAB_ffff8000800d33e8;
          }
          puVar9 = &DAT_ffff8000824d3456;
        }
        FUN_ffff8000800f068c(puVar9,s_tfa98xx_read_memtrack_data_ffff800082522a8b);
      }
      else {
        FUN_ffff8000800f068c(&DAT_ffff800082341704,s_tfa98xx_read_memtrack_data_ffff800082522a8b);
      }
      uVar11 = 1000;
      goto LAB_ffff8000800d33e8;
    }
  }
  FUN_ffff8000800f068c(&DAT_ffff8000822d703d,s_tfa98xx_read_memtrack_data_ffff800082522a8b);
  uVar11 = 6;
LAB_ffff8000800d33e8:
  FUN_ffff800081e5b620(param_1 + 0x1c8);
  lVar8 = sp_el0;
  if (*(long *)(lVar8 + 0x508) != local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_ffff800081e56064();
  }
  return uVar11;
}





/* ========================================================
 * Function: tfa98xx_i2c_remove (original: FUN_ffff8000800d40c4)
 * ======================================================== */
/* ============ tfa98xx_i2c_remove  @ ffff8000800d40c4  size=24 ============ */

void tfa98xx_i2c_remove(void)

{
  FUN_ffff8000800d684c();
  return;
}





/* ========================================================
 * Function: tfa98xx_set_tdm_slot (original: FUN_ffff8000800d41a8)
 * ======================================================== */
/* ============ tfa98xx_set_tdm_slot  @ ffff8000800d41a8  size=44 ============ */

undefined8 tfa98xx_set_tdm_slot(void)

{
  FUN_ffff8000800f068c(&DAT_ffff8000823c6cdb,s_tfa98xx_set_tdm_slot_ffff8000823acf1f);
  return 0;
}





/* ========================================================
 * Function: tfa98xx_dsp_init (original: FUN_ffff8000800d4704)
 * ======================================================== */
/* ============ tfa98xx_dsp_init  @ ffff8000800d4704  size=632 ============ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tfa98xx_dsp_init(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x1fc) != 3) {
    FUN_ffff8000800f068c
              (&DAT_ffff8000822f1605,s_tfa98xx_dsp_init_ffff800082573f9e,
               s_tfa98xx_dsp_init_ffff800082573f9e);
    return;
  }
  if (*(int *)(param_1 + 0x1f8) == 4) {
    FUN_ffff8000800f068c
              (&DAT_ffff8000823e246b,s_tfa98xx_dsp_init_ffff800082573f9e,
               s_tfa98xx_dsp_init_ffff800082573f9e);
    return;
  }
  FUN_ffff800081e5b5c4(param_1 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1f8) = 3;
  FUN_ffff8000800f068c
            (&DAT_ffff80008230bd11,s_tfa98xx_dsp_init_ffff800082573f9e,
             s_tfa98xx_dsp_init_ffff800082573f9e,*(undefined4 *)(param_1 + 0x260));
  if (*(uint *)(param_1 + 0x260) < 10) {
    iVar2 = FUN_ffff8000800d497c
                      (param_1,*(undefined4 *)(param_1 + 0x2e4),*(undefined4 *)(param_1 + 0x2e0));
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x1f8) = 4;
      FUN_ffff800080070b48
                (&DAT_ffff80008250bf14,*(long *)(param_1 + 8) + 0x20,
                 s_tfa_dev_start_success___d__ffff800082522ada,*(undefined4 *)(param_1 + 0x260));
      FUN_ffff8000802903f0(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x260) = 0;
      FUN_ffff800081e5b620(param_1 + 0x1c8);
      FUN_ffff800081e5b5c4(&DAT_ffff800082dd6670);
      iVar2 = _DAT_ffff8000836342b4;
      if (_DAT_ffff8000836342bc < _DAT_ffff8000836342b4) {
        _DAT_ffff8000836342bc = _DAT_ffff8000836342bc + 1;
      }
      iVar1 = _DAT_ffff8000836342bc;
      FUN_ffff800081e5b620(&DAT_ffff800082dd6670);
      if (iVar1 < iVar2) {
        return;
      }
      _DAT_ffff8000836342bc = 0;
      puVar3 = DAT_ffff800082dd6650;
      if ((undefined8 **)DAT_ffff800082dd6650 == &DAT_ffff800082dd6650) {
        _DAT_ffff8000836342bc = 0;
        return;
      }
      do {
        FUN_ffff800081e5b5c4(puVar3 + -0x20);
        FUN_ffff8000800d8090(puVar3[2],0x20,0);
        if (*(char *)(puVar3[2] + 0x14) == '\x01') {
          FUN_ffff8000801a0eb0(0x20,puVar3[-0x55],puVar3 + -0x47,0xfa);
        }
        FUN_ffff800081e5b620(puVar3 + -0x20);
        puVar3 = (undefined8 *)*puVar3;
      } while ((undefined8 **)puVar3 != &DAT_ffff800082dd6650);
      return;
    }
    if (iVar2 != 0x6f) {
      FUN_ffff80008005dc04
                (*(long *)(param_1 + 8) + 0x20,s_tfa_dev_start_failed___err__d____ffff8000824ee426,
                 iVar2,*(undefined4 *)(param_1 + 0x260));
      FUN_ffff8000801a0eb0(0x20,*(undefined8 *)(param_1 + 0x20),param_1 + 0x28,2);
      iVar2 = *(int *)(param_1 + 0x260) + 1;
      goto LAB_ffff8000800d482c;
    }
    *(undefined4 *)(param_1 + 0x1fc) = 2;
    FUN_ffff80008005dc04
              (*(long *)(param_1 + 8) + 0x20,s_Failed_starting_device_ffff8000824d34b9,0x6f);
  }
  else {
    FUN_ffff80008005dc04
              (*(long *)(param_1 + 8) + 0x20,s_Failed_starting_device___d__ffff8000823c6ce5);
  }
  *(undefined4 *)(param_1 + 0x1f8) = 2;
  FUN_ffff8000802903f0(param_1 + 0x28);
  iVar2 = 0;
LAB_ffff8000800d482c:
  *(int *)(param_1 + 0x260) = iVar2;
  FUN_ffff800081e5b620(param_1 + 0x1c8);
  return;
}





/* ========================================================
 * Function: tfa98xx_tfa_start (original: FUN_ffff8000800d497c)
 * ======================================================== */
/* ============ tfa98xx_tfa_start  @ ffff8000800d497c  size=500 ============ */

int tfa98xx_tfa_start(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  FUN_ffff8000800f068c
            (&DAT_ffff8000822f1634,s_tfa98xx_tfa_start_ffff8000825ddd5f,
             s_tfa98xx_tfa_start_ffff8000825ddd5f,param_2,param_3);
  if ((DAT_ffff80008363429c >> 3 & 1) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_ffff8000800fc6f0(1);
  }
  iVar2 = FUN_ffff8000800d88f4
                    (*(undefined8 *)(param_1 + 0x2d8),param_2,param_3,
                     *(undefined1 *)(param_1 + 0x23c));
  FUN_ffff8000800f068c
            (&DAT_ffff800082573faf,s_tfa98xx_tfa_start_ffff8000825ddd5f,
             s_tfa98xx_tfa_start_ffff8000825ddd5f,iVar2);
  if ((DAT_ffff80008363429c >> 3 & 1) != 0) {
    lVar4 = FUN_ffff8000800fc6f0(1);
    FUN_ffff800080070b48
              (&DAT_ffff80008250bf14,*(long *)(param_1 + 8) + 0x20,
               s_tfa_dev_start__d__d__time____lld_ffff800082482c55,param_2,param_3,
               (ulong)(lVar4 - lVar7) / 1000);
  }
  if ((iVar2 == 0) && (*(char *)(param_1 + 0x338) == '\x01')) {
    uVar6 = *(undefined8 *)(param_1 + 0x2d8);
    uVar1 = *(undefined2 *)(param_1 + 0x33a);
    uVar3 = FUN_ffff800081a54178(uVar6,1,0);
    if ((uVar3 == 0) &&
       ((uVar3 = FUN_ffff800081a54178(uVar6,3,uVar1), uVar3 == 0 &&
        (uVar3 = FUN_ffff800081a54178(uVar6,1,2), uVar3 == 0)))) {
      uVar3 = (uint)*(ushort *)(param_1 + 0x33a);
      puVar5 = &DAT_ffff8000825c3755;
      *(undefined1 *)(param_1 + 0x338) = 0;
    }
    else {
      puVar5 = &DAT_ffff800082391f65;
    }
    FUN_ffff8000800f068c(puVar5,s_tfa98xx_tfa_start_ffff8000825ddd5f,uVar3);
  }
  FUN_ffff800081a4717c(param_1);
  FUN_ffff800081a545f4(*(undefined8 *)(param_1 + 0x2d8));
  uVar3 = *(uint *)(param_1 + 0x334);
  if (((uVar3 & 1) == 0) && (*(char *)(*(long *)(param_1 + 0x2d8) + 0x14) == '\x02')) {
    if ((uVar3 >> 6 & 1) != 0) {
      FUN_ffff800081a4d748(*(long *)(param_1 + 0x2d8),7,1);
      uVar3 = *(uint *)(param_1 + 0x334);
    }
    if ((uVar3 >> 7 & 1) != 0) {
      FUN_ffff800081a4d748(*(undefined8 *)(param_1 + 0x2d8),0x24,1);
      FUN_ffff800081a4d748(*(undefined8 *)(param_1 + 0x2d8),0x22,1);
    }
  }
  return iVar2;
}





/* ========================================================
 * Function: tfa98xx_reg_read (original: FUN_ffff8000800d506c)
 * ======================================================== */
/* ============ tfa98xx_reg_read  @ ffff8000800d506c  size=28 ============ */

void tfa98xx_reg_read(long param_1)

{
  FUN_ffff8000800d4704(param_1 + -0x28);
  return;
}





/* ========================================================
 * Function: tfa98xx_dbgfs_otc_get (original: FUN_ffff8000800d61a8)
 * ======================================================== */
/* ============ tfa98xx_dbgfs_otc_get  @ ffff8000800d61a8  size=148 ============ */

undefined8 tfa98xx_dbgfs_otc_get(long param_1,ulong *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xb8);
  FUN_ffff800081e5b5c4(lVar4 + 0x1c8);
  uVar1 = FUN_ffff800081a53bc4(*(undefined8 *)(lVar4 + 0x2d8),0);
  FUN_ffff800081e5b620(lVar4 + 0x1c8);
  if ((int)uVar1 < 0) {
    uVar3 = 0xfffffffb;
    puVar2 = &DAT_ffff8000825dddb3;
  }
  else {
    uVar3 = 0;
    puVar2 = &DAT_ffff80008244dcee;
    *param_2 = (ulong)uVar1;
  }
  FUN_ffff8000800f068c
            (puVar2,s_tfa98xx_dbgfs_otc_get_ffff8000823acfae,
             *(undefined2 *)(*(long *)(lVar4 + 8) + 2),uVar1);
  return uVar3;
}





/* ========================================================
 * Function: tfa98xx_dbgfs_otc_set (original: FUN_ffff8000800d623c)
 * ======================================================== */
/* ============ tfa98xx_dbgfs_otc_set  @ ffff8000800d623c  size=236 ============ */

undefined8 tfa98xx_dbgfs_otc_set(long param_1,ulong param_2)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xb8);
  if (1 < param_2) {
    FUN_ffff8000800f068c
              (&DAT_ffff80008258eaa5,s_tfa98xx_dbgfs_otc_set_ffff800082326966,
               *(undefined2 *)(*(long *)(lVar3 + 8) + 2),param_2);
    return 0xffffffea;
  }
  FUN_ffff800081e5b5c4(lVar3 + 0x1c8);
  iVar2 = FUN_ffff800081a54178(*(undefined8 *)(lVar3 + 0x2d8),0,param_2 & 0xffffffff);
  FUN_ffff800081e5b620(lVar3 + 0x1c8);
  uVar1 = *(undefined2 *)(*(long *)(lVar3 + 8) + 2);
  if (iVar2 == 0) {
    FUN_ffff8000800f068c
              (&DAT_ffff8000823417e2,s_tfa98xx_dbgfs_otc_set_ffff800082326966,uVar1,param_2);
    return 0;
  }
  FUN_ffff8000800f068c(&DAT_ffff8000825dddb3,s_tfa98xx_dbgfs_otc_set_ffff800082326966,uVar1,iVar2);
  return 0xfffffffb;
}





/* ========================================================
 * Function: tfa98xx_dbgfs_mtpex_get (original: FUN_ffff8000800d6328)
 * ======================================================== */
/* ============ tfa98xx_dbgfs_mtpex_get  @ ffff8000800d6328  size=148 ============ */

undefined8 tfa98xx_dbgfs_mtpex_get(long param_1,ulong *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xb8);
  FUN_ffff800081e5b5c4(lVar4 + 0x1c8);
  uVar1 = FUN_ffff800081a53bc4(*(undefined8 *)(lVar4 + 0x2d8),1);
  FUN_ffff800081e5b620(lVar4 + 0x1c8);
  if ((int)uVar1 < 0) {
    uVar3 = 0xfffffffb;
    puVar2 = &DAT_ffff8000825dddb3;
  }
  else {
    uVar3 = 0;
    puVar2 = &DAT_ffff80008249ea07;
    *param_2 = (ulong)uVar1;
  }
  FUN_ffff8000800f068c
            (puVar2,s_tfa98xx_dbgfs_mtpex_get_ffff80008232697c,
             *(undefined2 *)(*(long *)(lVar4 + 8) + 2),uVar1);
  return uVar3;
}





/* ========================================================
 * Function: tfa98xx_dbgfs_mtpex_set (original: FUN_ffff8000800d63bc)
 * ======================================================== */
/* ============ tfa98xx_dbgfs_mtpex_set  @ ffff8000800d63bc  size=204 ============ */

undefined8 tfa98xx_dbgfs_mtpex_set(long param_1,long param_2)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xb8);
  if (param_2 != 0) {
    FUN_ffff8000800f068c
              (&DAT_ffff8000822a29db,s_tfa98xx_dbgfs_mtpex_set_ffff80008258eacb,
               *(undefined2 *)(*(long *)(lVar3 + 8) + 2));
    return 0xffffffea;
  }
  FUN_ffff800081e5b5c4(lVar3 + 0x1c8);
  iVar2 = FUN_ffff800081a54178(*(undefined8 *)(lVar3 + 0x2d8),1,0);
  FUN_ffff800081e5b620(lVar3 + 0x1c8);
  uVar1 = *(undefined2 *)(*(long *)(lVar3 + 8) + 2);
  if (iVar2 == 0) {
    FUN_ffff8000800f068c(&DAT_ffff800082522b5f,s_tfa98xx_dbgfs_mtpex_set_ffff80008258eacb,uVar1);
    return 0;
  }
  FUN_ffff8000800f068c(&DAT_ffff8000825dddb3,s_tfa98xx_dbgfs_mtpex_set_ffff80008258eacb,uVar1,iVar2)
  ;
  return 0xfffffffb;
}





/* ========================================================
 * Function: tfa98xx_dbgfs_temp_get (original: FUN_ffff8000800d6488)
 * ======================================================== */
/* ============ tfa98xx_dbgfs_temp_get  @ ffff8000800d6488  size=108 ============ */

undefined8 tfa98xx_dbgfs_temp_get(long param_1,long *param_2)

{
  short sVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xb8);
  FUN_ffff800081e5b5c4(lVar2 + 0x1c8);
  sVar1 = FUN_ffff800081a4ef88(*(undefined8 *)(lVar2 + 0x2d8));
  *param_2 = (long)sVar1;
  FUN_ffff800081e5b620(lVar2 + 0x1c8);
  FUN_ffff8000800f068c
            (&DAT_ffff8000822bcdaa,s_tfa98xx_dbgfs_temp_get_ffff8000822f1706,
             *(undefined2 *)(*(long *)(lVar2 + 8) + 2),*param_2);
  return 0;
}





/* ========================================================
 * Function: tfa98xx_dbgfs_temp_set (original: FUN_ffff8000800d64f4)
 * ======================================================== */
/* ============ tfa98xx_dbgfs_temp_set  @ ffff8000800d64f4  size=104 ============ */

undefined8 tfa98xx_dbgfs_temp_set(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xb8);
  FUN_ffff800081e5b5c4(lVar1 + 0x1c8);
  FUN_ffff8000800d7270(*(undefined8 *)(lVar1 + 0x2d8),param_2 & 0xffffffff);
  FUN_ffff800081e5b620(lVar1 + 0x1c8);
  FUN_ffff8000800f068c
            (&DAT_ffff8000823c6d9f,s_tfa98xx_dbgfs_temp_set_ffff80008258eae3,
             *(undefined2 *)(*(long *)(lVar1 + 8) + 2),param_2);
  return 0;
}





/* ========================================================
 * Function: tfa98xx_i2c_remove_int (original: FUN_ffff8000800d684c)
 * ======================================================== */
/* ============ tfa98xx_i2c_remove_int  @ ffff8000800d684c  size=396 ============ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tfa98xx_i2c_remove_int(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0xb8);
  FUN_ffff8000800f068c
            (&DAT_ffff8000823fd7f0,s_tfa98xx_i2c_remove_int_ffff8000824d3596,
             *(undefined2 *)(param_1 + 2));
  uVar2 = *(uint *)(lVar5 + 0x334);
  if (((uVar2 & 1) == 0) && (*(char *)(*(long *)(lVar5 + 0x2d8) + 0x14) == '\x02')) {
    if ((uVar2 >> 6 & 1) != 0) {
      FUN_ffff800081a4d748(*(long *)(lVar5 + 0x2d8),7,0);
      uVar2 = *(uint *)(lVar5 + 0x334);
    }
    if ((uVar2 >> 7 & 1) != 0) {
      FUN_ffff800081a4d748(*(undefined8 *)(lVar5 + 0x2d8),0x24,0);
      FUN_ffff800081a4d748(*(undefined8 *)(lVar5 + 0x2d8),0x22,0);
    }
  }
  FUN_ffff80008028e080(lVar5 + 0xf8,1);
  FUN_ffff80008028e080(lVar5 + 0x90,1);
  FUN_ffff80008028e080(lVar5 + 0x28,1);
  FUN_ffff80008028e080(lVar5 + 0x160,1);
  FUN_ffff80008071b7a8(param_1 + 0x20,&DAT_ffff800082dd66e8);
  FUN_ffff80008071b7a8(param_1 + 0x20,&DAT_ffff800082dd66a0);
  if (*(long *)(lVar5 + 0x328) != 0) {
    FUN_ffff800080814a3c();
  }
  FUN_ffff8000800d3250(lVar5);
  FUN_ffff8000819b72d8(param_1 + 0x20);
  FUN_ffff800081e5b5c4(&DAT_ffff800082dd6670);
  plVar3 = *(long **)(lVar5 + 0x2d0);
  plVar1 = (long *)(lVar5 + 0x2c8);
  if (((long *)*plVar3 == plVar1) && (lVar4 = *plVar1, *(long **)(lVar4 + 8) == plVar1)) {
    *(long **)(lVar4 + 8) = plVar3;
    *plVar3 = lVar4;
  }
  else {
    FUN_ffff8000800e6ee8();
  }
  *(undefined1 **)(lVar5 + 0x2c8) = &DAT_dead000000000100;
  *(undefined1 **)(lVar5 + 0x2d0) = &DAT_dead000000000122;
  _DAT_ffff8000836342b4 = _DAT_ffff8000836342b4 + -1;
  if (_DAT_ffff8000836342b4 == 0) {
    FUN_ffff8000800e3a10(_DAT_ffff8000836342d0);
    _DAT_ffff8000836342d0 = 0;
  }
  FUN_ffff800081e5b620(&DAT_ffff800082dd6670);
  return;
}





/* ========================================================
 * Function: tfa98xx_i2c_probe (original: FUN_ffff8000800d69d8)
 * ======================================================== */
/* ============ tfa98xx_i2c_probe  @ ffff8000800d69d8  size=168 ============ */

void tfa98xx_i2c_probe(undefined2 *param_1)

{
  long lVar1;
  undefined2 local_2c [2];
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x508);
  FUN_ffff8000800f068c(&DAT_ffff8000823e254a);
  local_2c[0] = *param_1;
  FUN_ffff8000800f068c(&DAT_ffff80008258eb24,local_2c,param_1 + 1,param_1 + 2);
  FUN_ffff8000800f068c(&DAT_ffff80008253d841,param_1[3],*(undefined4 *)(param_1 + 4));
  FUN_ffff8000800f068c(&DAT_ffff8000823920be,param_1 + 6,param_1 + 10,param_1 + 0xe);
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x508) != local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_ffff800081e56064();
  }
  return;
}





/* ========================================================
 * Function: tfa98xx_dsp_system_stable (original: FUN_ffff8000800d6c64)
 * ======================================================== */
/* ============ tfa98xx_dsp_system_stable  @ ffff8000800d6c64  size=84 ============ */

undefined4 tfa98xx_dsp_system_stable(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x90))();
  FUN_ffff8000800f068c
            (&DAT_ffff800082418540,s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,
             s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,uVar1,*param_2);
  return uVar1;
}





/* ========================================================
 * Function: tfa98xx_get_mtp (original: FUN_ffff8000800d6cb8)
 * ======================================================== */
/* ============ tfa98xx_get_mtp  @ ffff8000800d6cb8  size=404 ============ */

void tfa98xx_get_mtp(long param_1,undefined2 *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int local_40;
  ushort local_3c [2];
  long local_38;
  
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x508);
  local_40 = 0;
  local_3c[0] = 0;
  uVar3 = 9;
  if (*(char *)(param_1 + 0x14) != '\x01') {
    uVar3 = 0;
  }
  iVar2 = (**(code **)(param_1 + 0x60))(param_1,uVar3,local_3c);
  if (iVar2 == -100 || iVar2 == 0) {
    if ((local_3c[0] & 1) != 0) goto LAB_ffff8000800d6de0;
LAB_ffff8000800d6d20:
    uVar3 = (**(code **)(param_1 + 0x90))(param_1,&local_40);
    FUN_ffff8000800f068c
              (&DAT_ffff800082418540,s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,
               s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,uVar3,local_40);
    if (local_40 != 0) {
      local_3c[0] = 0;
      uVar3 = 0xffffff80;
      if (*(char *)(param_1 + 0x14) != '\x01') {
        uVar3 = 0xfffffff0;
      }
      iVar4 = (**(code **)(param_1 + 0x60))(param_1,uVar3,local_3c);
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = iVar4 + 100;
      }
      uVar6 = (uint)local_3c[0];
      if (iVar2 != 0) {
        uVar6 = -iVar2;
      }
      if ((int)uVar6 < 0) {
        iVar2 = -uVar6;
        lVar1 = sp_el0;
        if (*(long *)(lVar1 + 0x508) == local_38) {
          return;
        }
      }
      else {
        iVar2 = 0;
        *param_2 = (short)uVar6;
        lVar1 = sp_el0;
        if (*(long *)(lVar1 + 0x508) == local_38) {
          return;
        }
      }
      goto LAB_ffff8000800d6e3c;
    }
    puVar5 = &DAT_ffff8000825594a5;
  }
  else {
    FUN_ffff8000800f068c(&DAT_ffff8000824ee4f4,s_tfa_get_bf_ffff8000825740df,-100 - iVar2);
    if (-100 - iVar2 == 0) goto LAB_ffff8000800d6d20;
LAB_ffff8000800d6de0:
    puVar5 = &DAT_ffff8000823920fa;
  }
  FUN_ffff8000800f068c(puVar5,s_tfa98xx_get_mtp_ffff8000823418be);
  iVar2 = 4;
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x508) == local_38) {
    return;
  }
LAB_ffff8000800d6e3c:
                    /* WARNING: Subroutine does not return */
  FUN_ffff800081e56064(iVar2);
}





/* ========================================================
 * Function: tfa98xx_set_mtp (original: FUN_ffff8000800d6e4c)
 * ======================================================== */
/* ============ tfa98xx_set_mtp  @ ffff8000800d6e4c  size=804 ============ */

void tfa98xx_set_mtp(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int local_44;
  ushort local_40 [2];
  ushort local_3c [2];
  long local_38;
  
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x508);
  local_40[0] = 0;
  local_44 = 0;
  uVar6 = FUN_ffff8000800d6cb8(param_1,local_40);
  if ((int)uVar6 != 0) goto LAB_ffff8000800d6ecc;
  uVar9 = (uint)local_40[0] & (param_3 ^ 0xffffffff);
  if ((uint)local_40[0] == (uVar9 | param_3 & param_2 & 0xffff)) {
    if (*(int *)(param_1 + 0x108) != 0) {
      puVar7 = &DAT_ffff8000823e259d;
LAB_ffff8000800d6f00:
      FUN_ffff8000800f068c(puVar7,s_tfa98xx_set_mtp_ffff800082468332);
    }
LAB_ffff8000800d6eb0:
    uVar6 = 0;
    goto LAB_ffff8000800d6ecc;
  }
  uVar6 = (**(code **)(param_1 + 0xe0))(param_1,1);
  if ((int)uVar6 != 0) goto LAB_ffff8000800d6ecc;
  if (*(int *)(param_1 + 0x108) != 0) {
    FUN_ffff8000800f068c(&DAT_ffff8000825c37eb,s_tfa98xx_set_mtp_ffff800082468332);
  }
  uVar3 = (**(code **)(param_1 + 0x90))(param_1,&local_44);
  FUN_ffff8000800f068c
            (&DAT_ffff800082418540,s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,
             s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,uVar3,local_44);
  if (uVar3 != 0) {
    uVar6 = (ulong)uVar3;
    goto LAB_ffff8000800d6ecc;
  }
  if (local_44 == 0) {
    uVar6 = 4;
    goto LAB_ffff8000800d6ecc;
  }
  uVar8 = 0x40;
  if (*(char *)(param_1 + 0x14) != '\x01') {
    uVar8 = 0xf;
  }
  (**(code **)(param_1 + 0x68))(param_1,uVar8,0x5a6b);
  uVar8 = 0xb;
  if (*(char *)(param_1 + 0x14) != '\x01') {
    uVar8 = 0xffffffa1;
  }
  (**(code **)(param_1 + 0x68))(param_1,uVar8,0x5a);
  uVar8 = 0x40;
  if (*(char *)(param_1 + 0x14) != '\x01') {
    uVar8 = 0xf;
  }
  (**(code **)(param_1 + 0x68))(param_1,uVar8,0);
  uVar8 = 0xffffff80;
  if (*(char *)(param_1 + 0x14) != '\x01') {
    uVar8 = 0xfffffff0;
  }
  (**(code **)(param_1 + 0x68))(param_1,uVar8,uVar9 | param_3 & param_2);
  local_3c[0] = 0;
  bVar2 = *(char *)(param_1 + 0x14) != '\x01';
  uVar9 = 0x6200;
  if (bVar2) {
    uVar9 = 0xa300;
  }
  uVar3 = 0x62b0;
  if (bVar2) {
    uVar3 = 0xffffa360;
  }
  iVar4 = (**(code **)(param_1 + 0x60))(param_1,uVar9 >> 8,local_3c);
  if ((iVar4 == 0) || (iVar4 == -100)) {
    uVar10 = (uint)local_3c[0];
    uVar9 = uVar10 | 1 << (ulong)(uVar3 >> 4 & 0xf);
    local_3c[0] = (ushort)uVar9;
    if ((uVar10 != uVar9) &&
       ((iVar4 = (**(code **)(param_1 + 0x68))(param_1,uVar3 >> 8 & 0xff), iVar4 != -100 &&
        (iVar4 != 0)))) {
      puVar7 = &DAT_ffff8000824d360c;
      goto LAB_ffff8000800d7150;
    }
  }
  else {
    puVar7 = &DAT_ffff8000824ee4f4;
LAB_ffff8000800d7150:
    FUN_ffff8000800f068c(puVar7,s_tfa_set_bf_ffff8000824d3601,-100 - iVar4);
  }
  uVar8 = 0x40;
  if (*(char *)(param_1 + 0x14) != '\x01') {
    uVar8 = 0xf;
  }
  (**(code **)(param_1 + 0x68))(param_1,uVar8,0x5a6b);
  uVar8 = 0xb;
  if (*(char *)(param_1 + 0x14) != '\x01') {
    uVar8 = 0xffffffa1;
  }
  (**(code **)(param_1 + 0x68))(param_1,uVar8,0);
  uVar8 = 0x40;
  if (*(char *)(param_1 + 0x14) != '\x01') {
    uVar8 = 0xf;
  }
  (**(code **)(param_1 + 0x68))(param_1,uVar8,0);
  iVar4 = 100;
  do {
    FUN_ffff8000804f7e10(10);
    iVar5 = (**(code **)(param_1 + 0xd0))(param_1);
    if (iVar5 == 0) {
      uVar6 = (**(code **)(param_1 + 0xe0))(param_1,0);
      if ((int)uVar6 == 0) {
        if (*(int *)(param_1 + 0x108) == 0) goto LAB_ffff8000800d6eb0;
        puVar7 = &DAT_ffff80008230be55;
        goto LAB_ffff8000800d6f00;
      }
      break;
    }
    iVar4 = iVar4 + -1;
    uVar6 = 5;
  } while (iVar4 != 0);
LAB_ffff8000800d6ecc:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x508) != local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_ffff800081e56064(uVar6);
  }
  return;
}





/* ========================================================
 * Function: tfa98xx_set_exttemp (original: FUN_ffff8000800d7270)
 * ======================================================== */
/* ============ tfa98xx_set_exttemp  @ ffff8000800d7270  size=664 ============ */

void tfa98xx_set_exttemp(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  ushort local_44 [2];
  ushort local_40 [2];
  ushort local_3c [2];
  long local_38;
  
  lVar2 = sp_el0;
  local_38 = *(long *)(lVar2 + 0x508);
  if ((param_2 + 0x100 & 0xffff) < 0x200) {
    iVar1 = (param_2 >> 6 & 0x200) + param_2;
    FUN_ffff8000800f068c
              (&DAT_ffff8000822a2a3e,s_tfa98xx_set_exttemp_ffff800082392114,(int)(short)iVar1);
    local_44[0] = 0;
    bVar3 = *(char *)(param_1 + 0x14) != '\x01';
    uVar5 = 0x800;
    if (bVar3) {
      uVar5 = 0xb100;
    }
    uVar6 = 0x800;
    if (bVar3) {
      uVar6 = 0xffffb190;
    }
    iVar4 = (**(code **)(param_1 + 0x60))(param_1,uVar5 >> 8,local_44);
    if ((iVar4 == 0) || (iVar4 == -100)) {
      uVar8 = (uint)local_44[0];
      uVar5 = uVar8 | 1 << (ulong)(uVar6 >> 4 & 9);
      local_44[0] = (ushort)uVar5;
      if ((uVar8 != uVar5) &&
         ((iVar4 = (**(code **)(param_1 + 0x68))(param_1,uVar6 >> 8 & 0xff), iVar4 != -100 &&
          (iVar4 != 0)))) {
        puVar7 = &DAT_ffff8000824d360c;
        goto LAB_ffff8000800d74ec;
      }
    }
    else {
      puVar7 = &DAT_ffff8000824ee4f4;
LAB_ffff8000800d74ec:
      FUN_ffff8000800f068c(puVar7,s_tfa_set_bf_ffff8000824d3601,-100 - iVar4);
    }
    local_40[0] = 0;
    bVar3 = *(char *)(param_1 + 0x14) != '\x01';
    uVar5 = 0x800;
    if (bVar3) {
      uVar5 = 0xb100;
    }
    uVar6 = 0x818;
    if (bVar3) {
      uVar6 = 0xffffb108;
    }
    iVar4 = (**(code **)(param_1 + 0x60))(param_1,uVar5 >> 8,local_40);
    if ((iVar4 != 0) && (iVar4 != -100)) goto LAB_ffff8000800d7494;
    uVar5 = uVar6 >> 4 & 1;
    uVar8 = iVar1 << (ulong)uVar5;
    uVar9 = (uint)local_40[0];
    uVar5 = uVar9 & (0x1ff << (ulong)uVar5 ^ 0xffffffffU);
    local_40[0] = (ushort)uVar5 | (ushort)uVar8;
    if ((uVar9 == (uVar5 | uVar8 & 0xffff)) ||
       (iVar4 = (**(code **)(param_1 + 0x68))(param_1,uVar6 >> 8 & 0xff), iVar4 == -100)) {
LAB_ffff8000800d7468:
      lVar2 = sp_el0;
      if (*(long *)(lVar2 + 0x508) == local_38) {
        return;
      }
      goto LAB_ffff8000800d74e0;
    }
LAB_ffff8000800d7464:
    if (iVar4 == 0) goto LAB_ffff8000800d7468;
    puVar7 = &DAT_ffff8000824d360c;
  }
  else {
    FUN_ffff8000800f068c(&DAT_ffff80008253d859,s_tfa98xx_set_exttemp_ffff800082392114);
    local_3c[0] = 0;
    bVar3 = *(char *)(param_1 + 0x14) != '\x01';
    uVar5 = 0x800;
    if (bVar3) {
      uVar5 = 0xb100;
    }
    uVar6 = 0x800;
    if (bVar3) {
      uVar6 = 0xffffb190;
    }
    iVar4 = (**(code **)(param_1 + 0x60))(param_1,uVar5 >> 8,local_3c);
    if ((iVar4 == 0) || (iVar4 == -100)) {
      uVar8 = (uint)local_3c[0];
      uVar5 = uVar8 & (1 << (ulong)(uVar6 >> 4 & 9) ^ 0xffffffffU);
      local_3c[0] = (ushort)uVar5;
      if ((uVar8 != uVar5) &&
         (iVar4 = (**(code **)(param_1 + 0x68))(param_1,uVar6 >> 8 & 0xff), iVar4 != -100))
      goto LAB_ffff8000800d7464;
      goto LAB_ffff8000800d7468;
    }
LAB_ffff8000800d7494:
    puVar7 = &DAT_ffff8000824ee4f4;
  }
  FUN_ffff8000800f068c(puVar7,s_tfa_set_bf_ffff8000824d3601,-100 - iVar4);
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x508) == local_38) {
    return;
  }
LAB_ffff8000800d74e0:
                    /* WARNING: Subroutine does not return */
  FUN_ffff800081e56064();
}





/* ========================================================
 * Function: tfa_cf_powerup (original: FUN_ffff8000800d7508)
 * ======================================================== */
/* ============ tfa_cf_powerup  @ ffff8000800d7508  size=956 ============ */

undefined4 tfa_cf_powerup(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int local_30;
  ushort local_2c [2];
  long local_28;
  
  lVar1 = sp_el0;
  local_28 = *(long *)(lVar1 + 0x508);
  local_30 = 0;
  local_2c[0] = 0;
  uVar3 = 9;
  if (*(char *)(param_1 + 0x14) != '\x01') {
    uVar3 = 0;
  }
  iVar2 = (**(code **)(param_1 + 0x60))(param_1,uVar3,local_2c);
  if ((iVar2 == 0) || (iVar2 == -100)) {
    local_2c[0] = local_2c[0] & 0xfffe;
    iVar2 = (**(code **)(param_1 + 0x68))(param_1,uVar3);
    if ((iVar2 == -100) || (iVar2 == 0)) goto LAB_ffff8000800d75b4;
    puVar4 = &DAT_ffff8000824d360c;
  }
  else {
    puVar4 = &DAT_ffff8000824ee4f4;
  }
  FUN_ffff8000800f068c(puVar4,s_tfa_set_bf_volatile_ffff8000823418ce,-100 - iVar2);
LAB_ffff8000800d75b4:
  if (*(int *)(param_1 + 0x108) != 0) {
    FUN_ffff8000800f068c(&DAT_ffff80008253d89e,s_tfa_cf_powerup_ffff8000824d362b);
  }
  uVar3 = (**(code **)(param_1 + 0x90))(param_1,&local_30);
  FUN_ffff8000800f068c
            (&DAT_ffff800082418540,s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,
             s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,uVar3,local_30);
  if (local_30 == 0) {
    FUN_ffff8000804f7e10(10);
    uVar3 = (**(code **)(param_1 + 0x90))(param_1,&local_30);
    FUN_ffff8000800f068c
              (&DAT_ffff800082418540,s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,
               s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,uVar3,local_30);
    if (local_30 == 0) {
      FUN_ffff8000804f7e10(10);
      uVar3 = (**(code **)(param_1 + 0x90))(param_1,&local_30);
      FUN_ffff8000800f068c
                (&DAT_ffff800082418540,s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,
                 s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,uVar3,local_30);
      if (local_30 == 0) {
        FUN_ffff8000804f7e10(10);
        uVar3 = (**(code **)(param_1 + 0x90))(param_1,&local_30);
        FUN_ffff8000800f068c
                  (&DAT_ffff800082418540,s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,
                   s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,uVar3,local_30);
        if (local_30 == 0) {
          FUN_ffff8000804f7e10(10);
          uVar3 = (**(code **)(param_1 + 0x90))(param_1,&local_30);
          FUN_ffff8000800f068c
                    (&DAT_ffff800082418540,s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,
                     s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,uVar3,local_30);
          if (local_30 == 0) {
            FUN_ffff8000804f7e10(10);
            uVar3 = (**(code **)(param_1 + 0x90))(param_1,&local_30);
            FUN_ffff8000800f068c
                      (&DAT_ffff800082418540,s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,
                       s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,uVar3,local_30);
            if (local_30 == 0) {
              FUN_ffff8000804f7e10(10);
              uVar3 = (**(code **)(param_1 + 0x90))(param_1,&local_30);
              FUN_ffff8000800f068c
                        (&DAT_ffff800082418540,s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,
                         s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,uVar3,local_30);
              if (local_30 == 0) {
                FUN_ffff8000804f7e10(10);
                uVar3 = (**(code **)(param_1 + 0x90))(param_1,&local_30);
                FUN_ffff8000800f068c
                          (&DAT_ffff800082418540,s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,
                           s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,uVar3,local_30);
                if (local_30 == 0) {
                  FUN_ffff8000804f7e10(10);
                  uVar3 = (**(code **)(param_1 + 0x90))(param_1,&local_30);
                  FUN_ffff8000800f068c
                            (&DAT_ffff800082418540,s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,
                             s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,uVar3,local_30);
                  if (local_30 == 0) {
                    FUN_ffff8000804f7e10(10);
                    uVar3 = (**(code **)(param_1 + 0x90))(param_1,&local_30);
                    FUN_ffff8000800f068c
                              (&DAT_ffff800082418540,s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,
                               s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,uVar3,local_30);
                    if (local_30 == 0) {
                      FUN_ffff8000804f7e10(10);
                      FUN_ffff8000800f068c(&DAT_ffff80008244dd9c,s_tfa_cf_powerup_ffff8000824d362b);
                      uVar3 = 5;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x508) != local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_ffff800081e56064();
  }
  return uVar3;
}





/* ========================================================
 * Function: tfaRunSpeakerStartup (original: FUN_ffff8000800d78c4)
 * ======================================================== */
/* ============ tfaRunSpeakerStartup  @ ffff8000800d78c4  size=540 ============ */

void tfaRunSpeakerStartup(long param_1,int param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ushort local_3c [2];
  long local_38;
  
  lVar1 = sp_el0;
  local_38 = *(long *)(lVar1 + 0x508);
  FUN_ffff8000800f068c
            (&DAT_ffff8000822a2a5b,s_tfaRunSpeakerStartup_ffff8000823fd8ea,
             s_tfaRunSpeakerStartup_ffff8000823fd8ea,param_2,param_3);
  if (param_2 != 0) {
LAB_ffff8000800d7998:
    (**(code **)(param_1 + 0xa0))(param_1);
    iVar3 = FUN_ffff800081a4aa90(param_1);
    if (iVar3 == 0) {
      iVar3 = FUN_ffff800081a4ade8(param_1,param_3,0);
      iVar2 = 0;
      if (iVar3 == 0) goto LAB_ffff8000800d79cc;
      puVar4 = &DAT_ffff8000825c386b;
    }
    else {
      puVar4 = &DAT_ffff8000823418e2;
    }
    FUN_ffff8000800f068c
              (puVar4,s_tfaRunSpeakerStartup_ffff8000823fd8ea,
               s_tfaRunSpeakerStartup_ffff8000823fd8ea,iVar3);
    iVar2 = iVar3;
    goto LAB_ffff8000800d79cc;
  }
  iVar2 = FUN_ffff800081a5258c(param_1,param_3);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x138) == 0) {
      local_3c[0] = 0;
      uVar5 = 9;
      if (*(char *)(param_1 + 0x14) != '\x01') {
        uVar5 = 0;
      }
      iVar2 = (**(code **)(param_1 + 0x60))(param_1,uVar5,local_3c);
      if ((iVar2 != -100) && (iVar2 != 0)) {
        iVar2 = -100 - iVar2;
        FUN_ffff8000800f068c(&DAT_ffff8000824ee4f4,s_tfa_get_bf_ffff8000825740df,iVar2);
        goto joined_r0xffff8000800d7abc;
      }
      if ((local_3c[0] >> 2 & 1) != 0) goto LAB_ffff8000800d7980;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xfc);
joined_r0xffff8000800d7abc:
      if (iVar2 != 0) {
LAB_ffff8000800d7980:
        if ((*(int *)(param_1 + 0xfc) != -1) || (iVar2 = FUN_ffff800081a52828(param_1), iVar2 == 0))
        goto LAB_ffff8000800d7998;
        goto LAB_ffff8000800d7a8c;
      }
    }
    FUN_ffff8000800f068c(&DAT_ffff8000825594fa,s_tfaRunSpeakerStartup_ffff8000823fd8ea);
    iVar2 = 0;
  }
  else {
    FUN_ffff8000800f068c
              (&DAT_ffff8000822a2a7d,s_tfaRunSpeakerStartup_ffff8000823fd8ea,
               s_techpack_audio_asoc_codecs_tfa98_ffff8000823ad032,0xa98,iVar2);
LAB_ffff8000800d7a8c:
    FUN_ffff8000800f068c(&DAT_ffff8000823c6e14,s_tfaRunSpeakerStartup_ffff8000823fd8ea,iVar2);
  }
LAB_ffff8000800d79cc:
  lVar1 = sp_el0;
  if (*(long *)(lVar1 + 0x508) != local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_ffff800081e56064(iVar2);
  }
  return;
}





/* ========================================================
 * Function: tfa_dev_set_state (original: FUN_ffff8000800d8090)
 * ======================================================== */
/* ============ tfa_dev_set_state  @ ffff8000800d8090  size=2148 ============ */

void tfa_dev_set_state(long param_1,uint param_2,int param_3)

{
  ushort uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  int local_70;
  ushort local_6c [2];
  long local_68;
  
  lVar2 = sp_el0;
  local_68 = *(long *)(lVar2 + 0x508);
  local_70 = 0;
  FUN_ffff8000800f068c(&DAT_ffff80008257410d,s_tfa_dev_set_state_ffff80008258ebfc,param_2,param_3);
  uVar9 = param_2 & 0xf;
  uVar7 = 2;
  if (uVar9 < 4) {
    if (uVar9 < 3) goto LAB_ffff8000800d8350;
    if (uVar9 != 3) goto LAB_ffff8000800d8378;
    if (*(int *)(param_1 + 0x138) == 0) {
      local_6c[0] = 0;
      uVar6 = 9;
      if (*(char *)(param_1 + 0x14) != '\x01') {
        uVar6 = 0;
      }
      iVar4 = (**(code **)(param_1 + 0x60))(param_1,uVar6,local_6c);
      if ((iVar4 == 0) || (iVar4 == -100)) {
        if ((local_6c[0] == (local_6c[0] & 0xffdf)) ||
           ((local_6c[0] = local_6c[0] & 0xffdf,
            iVar4 = (**(code **)(param_1 + 0x68))(param_1,uVar6), iVar4 == -100 || (iVar4 == 0))))
        goto LAB_ffff8000800d8174;
        puVar10 = &DAT_ffff8000824d360c;
      }
      else {
        puVar10 = &DAT_ffff8000824ee4f4;
      }
      FUN_ffff8000800f068c(puVar10,s_tfa_set_bf_ffff8000824d3601,-100 - iVar4);
      cVar8 = *(char *)(param_1 + 0x14);
    }
    else {
LAB_ffff8000800d8174:
      cVar8 = *(char *)(param_1 + 0x14);
    }
    if (cVar8 == '\x02') {
      local_6c[0] = 0;
      iVar4 = (**(code **)(param_1 + 0x60))(param_1,1,local_6c);
      if ((iVar4 == 0) || (iVar4 == -100)) {
        if ((local_6c[0] != (local_6c[0] | 4)) &&
           ((local_6c[0] = local_6c[0] | 4, iVar4 = (**(code **)(param_1 + 0x68))(param_1,1),
            iVar4 != -100 && (iVar4 != 0)))) {
          puVar10 = &DAT_ffff8000824d360c;
          goto LAB_ffff8000800d870c;
        }
      }
      else {
        puVar10 = &DAT_ffff8000824ee4f4;
LAB_ffff8000800d870c:
        FUN_ffff8000800f068c(puVar10,s_tfa_set_bf_ffff8000824d3601,-100 - iVar4);
      }
      cVar8 = *(char *)(param_1 + 0x14);
    }
    uVar6 = 9;
    if (cVar8 != '\x01') {
      uVar6 = 0;
    }
    local_6c[0] = 0;
    iVar4 = (**(code **)(param_1 + 0x60))(param_1,uVar6,local_6c);
    if ((iVar4 == 0) || (iVar4 == -100)) {
      uVar1 = local_6c[0] & 0xfffe;
      bVar3 = local_6c[0] != uVar1;
      local_6c[0] = uVar1;
      if ((bVar3) &&
         ((iVar4 = (**(code **)(param_1 + 0x68))(param_1,uVar6), iVar4 != -100 && (iVar4 != 0)))) {
        puVar10 = &DAT_ffff8000824d360c;
        goto LAB_ffff8000800d86dc;
      }
    }
    else {
      puVar10 = &DAT_ffff8000824ee4f4;
LAB_ffff8000800d86dc:
      FUN_ffff8000800f068c(puVar10,s_tfa_set_bf_ffff8000824d3601,-100 - iVar4);
    }
    iVar4 = 0x32;
    do {
      iVar5 = (**(code **)(param_1 + 0x90))(param_1,&local_70);
      FUN_ffff8000800f068c
                (&DAT_ffff800082418540,s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,
                 s_tfa98xx_dsp_system_stable_ffff8000823fd8b5,iVar5,local_70);
      if (iVar5 != 0) {
        uVar7 = 7;
        goto LAB_ffff8000800d8378;
      }
    } while ((local_70 == 0) && (iVar4 = iVar4 + -1, iVar4 != -1));
    FUN_ffff8000800f068c
              (&DAT_ffff80008230be8c,s_tfa_dev_set_state_ffff80008258ebfc,0,local_70,iVar4);
    if ((param_3 != 0) &&
       ((*(int *)(param_1 + 0x138) == 0 &&
        (uVar6 = (**(code **)(param_1 + 0xe0))(param_1,1), *(int *)(param_1 + 0x108) != 0)))) {
      FUN_ffff8000800f068c(&DAT_ffff8000823fd959,s_tfa_dev_set_state_ffff80008258ebfc,uVar6);
    }
  }
  else if (uVar9 < 6) {
    if (uVar9 != 4) {
      if (uVar9 != 5) goto LAB_ffff8000800d8378;
      local_6c[0] = 0;
      uVar6 = 9;
      if (*(char *)(param_1 + 0x14) != '\x01') {
        uVar6 = 0;
      }
      iVar4 = (**(code **)(param_1 + 0x60))(param_1,uVar6,local_6c);
      if ((iVar4 == 0) || (iVar4 == -100)) {
        if ((local_6c[0] != (local_6c[0] & 0xfffe)) &&
           ((local_6c[0] = local_6c[0] & 0xfffe,
            iVar4 = (**(code **)(param_1 + 0x68))(param_1,uVar6), iVar4 != -100 && (iVar4 != 0)))) {
          puVar10 = &DAT_ffff8000824d360c;
          goto LAB_ffff8000800d8444;
        }
      }
      else {
        puVar10 = &DAT_ffff8000824ee4f4;
LAB_ffff8000800d8444:
        FUN_ffff8000800f068c(puVar10,s_tfa_set_bf_ffff8000824d3601,-100 - iVar4);
      }
      local_6c[0] = 0;
      bVar3 = *(char *)(param_1 + 0x14) != '\x01';
      uVar9 = 0xff00;
      if (bVar3) {
        uVar9 = 0x100;
      }
      uVar11 = 0x120;
      if (!bVar3) {
        uVar11 = 0xffffffff;
      }
      iVar4 = (**(code **)(param_1 + 0x60))(param_1,uVar9 >> 8,local_6c);
      if ((iVar4 == 0) || (iVar4 == -100)) {
        uVar9 = uVar11 >> 4 & 0xf;
        uVar12 = (uint)local_6c[0];
        uVar9 = uVar12 & (~(-1 << (ulong)((uVar11 & 0xf) + 1)) << (ulong)uVar9 ^ 0xffffffffU) |
                1 << (ulong)uVar9;
        local_6c[0] = (ushort)uVar9;
        if ((uVar12 != uVar9) &&
           ((iVar4 = (**(code **)(param_1 + 0x68))(param_1,uVar11 >> 8 & 0xff), iVar4 != -100 &&
            (iVar4 != 0)))) {
          puVar10 = &DAT_ffff8000824d360c;
          goto LAB_ffff8000800d8508;
        }
      }
      else {
        puVar10 = &DAT_ffff8000824ee4f4;
LAB_ffff8000800d8508:
        FUN_ffff8000800f068c(puVar10,s_tfa_set_bf_ffff8000824d3601,-100 - iVar4);
      }
      FUN_ffff8000800f068c
                (&DAT_ffff80008230bedb,s_tfa_dev_set_state_ffff80008258ebfc,
                 *(undefined4 *)(param_1 + 0x138),param_3);
      uVar6 = 9;
      if (*(char *)(param_1 + 0x14) != '\x01') {
        uVar6 = 0;
      }
      if (*(int *)(param_1 + 0x138) == 0) {
        local_6c[0] = 0;
        iVar4 = (**(code **)(param_1 + 0x60))(param_1,uVar6,local_6c);
        if ((iVar4 == 0) || (iVar4 == -100)) {
          bVar3 = local_6c[0] != (local_6c[0] | 0x20);
          local_6c[0] = local_6c[0] | 0x20;
          if (bVar3) goto LAB_ffff8000800d85c8;
          goto LAB_ffff8000800d85e4;
        }
LAB_ffff8000800d889c:
        puVar10 = &DAT_ffff8000824ee4f4;
LAB_ffff8000800d88d4:
        FUN_ffff8000800f068c(puVar10,s_tfa_set_bf_ffff8000824d3601,-100 - iVar4);
      }
      else {
        local_6c[0] = 0;
        iVar4 = (**(code **)(param_1 + 0x60))(param_1,uVar6,local_6c);
        if ((iVar4 != 0) && (iVar4 != -100)) goto LAB_ffff8000800d889c;
        bVar3 = local_6c[0] != (local_6c[0] | 8);
        local_6c[0] = local_6c[0] | 8;
        if (bVar3) {
LAB_ffff8000800d85c8:
          iVar4 = (**(code **)(param_1 + 0x68))(param_1,uVar6);
          if ((iVar4 == -100) || (iVar4 == 0)) goto LAB_ffff8000800d85e4;
          puVar10 = &DAT_ffff8000824d360c;
          goto LAB_ffff8000800d88d4;
        }
      }
LAB_ffff8000800d85e4:
      local_6c[0] = 0;
      uVar6 = 0xffffff80;
      if (*(char *)(param_1 + 0x14) != '\x01') {
        uVar6 = 0xfffffff0;
      }
      iVar4 = (**(code **)(param_1 + 0x60))(param_1,uVar6,local_6c);
      if ((iVar4 == -100) || (iVar4 == 0)) {
        if ((local_6c[0] & 1) == 1) goto LAB_ffff8000800d8628;
      }
      else {
        FUN_ffff8000800f068c(&DAT_ffff8000824ee4f4,s_tfa_get_bf_ffff8000825740df,-100 - iVar4);
        if (-100 - iVar4 == 1) {
LAB_ffff8000800d8628:
          if ((param_3 != 0) && (*(char *)(param_1 + 0x14) == '\x02')) {
            iVar4 = -200;
            cVar8 = '\x02';
            do {
              uVar6 = 0xffffff80;
              if (cVar8 != '\x01') {
                uVar6 = 0xfffffff0;
              }
              local_6c[0] = 0;
              iVar5 = (**(code **)(param_1 + 0x60))(param_1,uVar6,local_6c);
              if ((iVar5 == -100) || (iVar5 == 0)) {
                if ((local_6c[0] >> 1 & 1) == 1) break;
              }
              else {
                FUN_ffff8000800f068c
                          (&DAT_ffff8000824ee4f4,s_tfa_get_bf_ffff8000825740df,-100 - iVar5);
                if (-100 - iVar5 == 1) break;
              }
              if (iVar4 == 0) break;
              FUN_ffff8000804f7e10(10);
              cVar8 = *(char *)(param_1 + 0x14);
              iVar4 = iVar4 + 1;
            } while( true );
          }
        }
      }
      if (((param_3 == 0) || (*(int *)(param_1 + 0x138) != 0)) ||
         (uVar6 = (**(code **)(param_1 + 0xe0))(param_1,0), *(int *)(param_1 + 0x108) == 0)) {
        iVar4 = *(int *)(param_1 + 0x134);
      }
      else {
        FUN_ffff8000800f068c(&DAT_ffff8000824b93b5,s_tfa_dev_set_state_ffff80008258ebfc,uVar6);
        iVar4 = *(int *)(param_1 + 0x134);
      }
      if (iVar4 != 0) {
        if (*(int *)(param_1 + 0x108) != 0) {
          FUN_ffff8000800f068c
                    (&DAT_ffff8000825c38d4,s_tfa_dev_set_state_ffff80008258ebfc,
                     *(undefined1 *)(param_1 + 0x12));
        }
        iVar4 = -10;
        do {
          local_6c[0] = 0;
          bVar3 = *(char *)(param_1 + 0x14) != '\x01';
          uVar9 = 0xb0;
          if (bVar3) {
            uVar9 = 0x1090;
          }
          iVar5 = (**(code **)(param_1 + 0x60))(param_1,(ulong)bVar3 << 4,local_6c);
          if (iVar5 == -100 || iVar5 == 0) {
            if ((local_6c[0] >> (ulong)(uVar9 >> 4 & 0xb) & 1) != 1 || iVar4 == 0)
            goto LAB_ffff8000800d8858;
          }
          else {
            FUN_ffff8000800f068c(&DAT_ffff8000824ee4f4,s_tfa_get_bf_ffff8000825740df,-100 - iVar5);
            if (-100 - iVar5 != 1 || iVar4 == 0) goto LAB_ffff8000800d8858;
          }
          FUN_ffff8000804f7e10(1);
          iVar4 = iVar4 + 1;
        } while( true );
      }
    }
  }
  else if (uVar9 != 6) {
    if (uVar9 != 7) goto LAB_ffff8000800d8378;
    uVar6 = 9;
    if (*(char *)(param_1 + 0x14) != '\x01') {
      uVar6 = 0;
    }
    (**(code **)(param_1 + 0x68))(param_1,uVar6,2);
    (**(code **)(param_1 + 0x88))(param_1,1);
    if (*(code **)(param_1 + 0x80) != (code *)0x0) {
      (**(code **)(param_1 + 0x80))(param_1);
    }
  }
LAB_ffff8000800d8350:
  if ((param_2 >> 4 & 1) != 0) {
    FUN_ffff800081a4f1c8(param_1,2);
  }
  if ((param_2 >> 5 & 1) != 0) {
    FUN_ffff800081a4f1c8(param_1,0);
  }
  uVar7 = 0;
  *(uint *)(param_1 + 0x10c) = param_2;
LAB_ffff8000800d8378:
  lVar2 = sp_el0;
  if (*(long *)(lVar2 + 0x508) != local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_ffff800081e56064(uVar7);
  }
  return;
LAB_ffff8000800d8858:
  (**(code **)(param_1 + 0x88))(param_1,1);
  (**(code **)(param_1 + 0x88))(param_1,0);
  *(undefined4 *)(param_1 + 0x134) = 0;
  goto LAB_ffff8000800d8350;
}





/* ========================================================
 * Function: tfa_dev_start (original: FUN_ffff8000800d88f4)
 * ======================================================== */
/* ============ tfa_dev_start  @ ffff8000800d88f4  size=2040 ============ */

void tfa_dev_start(undefined4 *param_1,int param_2,int param_3,char param_4)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  ushort local_4c [2];
  long local_48;
  
  lVar8 = sp_el0;
  local_48 = *(long *)(lVar8 + 0x508);
  FUN_ffff8000800f068c(&DAT_ffff8000825dde24,s_tfa_dev_start_ffff8000823fd8ff);
  iVar4 = (**(code **)(param_1 + 0x2e))(param_1);
  if (iVar4 == 0xff) {
    iVar4 = -1;
  }
  uVar6 = FUN_ffff800081a4c674(*(undefined8 *)(param_1 + 0x44),*param_1,iVar4);
  uVar7 = FUN_ffff800081a4c674(*(undefined8 *)(param_1 + 0x44),*param_1,param_2);
  FUN_ffff8000800f068c(&DAT_ffff80008258eb84,s_tfa_dev_start_ffff8000823fd8ff,uVar6,uVar7);
  iVar4 = FUN_ffff800081a51f70(param_1);
  if (*(char *)(param_1 + 5) == '\x01') {
    if ((*(byte *)(param_1 + 0xf) >> 1 & 1) != 0) {
      iVar4 = 0;
      goto LAB_ffff8000800d8ddc;
    }
    local_4c[0] = 0;
    iVar5 = (**(code **)(param_1 + 0x18))(param_1,4,local_4c);
    if ((iVar5 == 0) || (iVar5 == -100)) {
      uVar2 = local_4c[0] | 0x800;
      bVar3 = local_4c[0] != uVar2;
      local_4c[0] = uVar2;
      if ((bVar3) &&
         ((iVar5 = (**(code **)(param_1 + 0x1a))(param_1,4), iVar5 != 0 && (iVar5 != -100)))) {
        puVar11 = &DAT_ffff8000824d360c;
        goto LAB_ffff8000800d8a34;
      }
LAB_ffff8000800d8a54:
      iVar4 = 0;
      iVar5 = 0;
      if (*(char *)(param_1 + 5) == '\x02') goto LAB_ffff8000800d8a64;
      goto LAB_ffff8000800d8ddc;
    }
    puVar11 = &DAT_ffff8000824ee4f4;
LAB_ffff8000800d8a34:
    iVar4 = iVar5 + 100;
    FUN_ffff8000800f068c(puVar11,s_tfa_set_bf_ffff8000824d3601,-100 - iVar5);
    if (iVar4 == 0) goto LAB_ffff8000800d8a54;
  }
  else {
    iVar5 = iVar4;
    if (*(char *)(param_1 + 5) != '\x02') goto LAB_ffff8000800d8ddc;
LAB_ffff8000800d8a64:
    iVar4 = iVar5;
    if ((*(byte *)(param_1 + 0xf) >> 1 & 1) == 0) goto LAB_ffff8000800d8ddc;
    if ((param_4 == ' ') || (param_4 == '\x18')) {
      local_4c[0] = 0;
      iVar5 = (**(code **)(param_1 + 0x18))(param_1,0x20,local_4c);
      if ((iVar5 == 0) || (iVar5 == -100)) {
        uVar2 = local_4c[0] & 0xfff | 0x2000;
        if (((local_4c[0] != uVar2) &&
            (local_4c[0] = uVar2, iVar5 = (**(code **)(param_1 + 0x1a))(param_1,0x20), iVar5 != -100
            )) && (iVar5 != 0)) {
          puVar11 = &DAT_ffff8000824d360c;
          goto LAB_ffff8000800d8b5c;
        }
      }
      else {
        puVar11 = &DAT_ffff8000824ee4f4;
LAB_ffff8000800d8b5c:
        FUN_ffff8000800f068c(puVar11,s_tfa_set_bf_ffff8000824d3601,-100 - iVar5);
      }
      local_4c[0] = 0;
      uVar9 = 0x11;
      if (*(char *)(param_1 + 5) != '\x01') {
        uVar9 = 0x21;
      }
      iVar5 = (**(code **)(param_1 + 0x18))(param_1,uVar9,local_4c);
      if ((iVar5 == 0) || (iVar5 == -100)) {
        if ((local_4c[0] != (local_4c[0] | 0x1f0)) &&
           ((local_4c[0] = local_4c[0] | 0x1f0, iVar5 = (**(code **)(param_1 + 0x1a))(param_1,uVar9)
            , iVar5 != -100 && (iVar5 != 0)))) {
          puVar11 = &DAT_ffff8000824d360c;
          goto LAB_ffff8000800d8bf0;
        }
      }
      else {
        puVar11 = &DAT_ffff8000824ee4f4;
LAB_ffff8000800d8bf0:
        FUN_ffff8000800f068c(puVar11,s_tfa_set_bf_ffff8000824d3601,-100 - iVar5);
      }
      local_4c[0] = 0;
      uVar10 = 0xff00;
      if (*(char *)(param_1 + 5) != '\x01') {
        uVar10 = 0x2200;
      }
      uVar12 = 0x2224;
      if (*(char *)(param_1 + 5) == '\x01') {
        uVar12 = 0xffffffff;
      }
      iVar5 = (**(code **)(param_1 + 0x18))(param_1,uVar10 >> 8,local_4c);
      if ((iVar5 == 0) || (iVar5 == -100)) {
        iVar5 = 0x1f;
        goto LAB_ffff8000800d8d6c;
      }
LAB_ffff8000800d8dbc:
      puVar11 = &DAT_ffff8000824ee4f4;
    }
    else {
      if (param_4 != '\x10') {
        iVar4 = 2;
        goto LAB_ffff8000800d9060;
      }
      local_4c[0] = 0;
      iVar5 = (**(code **)(param_1 + 0x18))(param_1,0x20,local_4c);
      if ((iVar5 == 0) || (iVar5 == -100)) {
        if ((0xfff < local_4c[0]) &&
           ((local_4c[0] = local_4c[0] & 0xfff, iVar5 = (**(code **)(param_1 + 0x1a))(param_1,0x20),
            iVar5 != -100 && (iVar5 != 0)))) {
          puVar11 = &DAT_ffff8000824d360c;
          goto LAB_ffff8000800d8c68;
        }
      }
      else {
        puVar11 = &DAT_ffff8000824ee4f4;
LAB_ffff8000800d8c68:
        FUN_ffff8000800f068c(puVar11,s_tfa_set_bf_ffff8000824d3601,-100 - iVar5);
      }
      local_4c[0] = 0;
      uVar9 = 0x11;
      if (*(char *)(param_1 + 5) != '\x01') {
        uVar9 = 0x21;
      }
      iVar5 = (**(code **)(param_1 + 0x18))(param_1,uVar9,local_4c);
      if ((iVar5 == 0) || (iVar5 == -100)) {
        uVar2 = local_4c[0] & 0xfeff | 0xf0;
        if ((local_4c[0] != uVar2) &&
           ((local_4c[0] = uVar2, iVar5 = (**(code **)(param_1 + 0x1a))(param_1,uVar9),
            iVar5 != -100 && (iVar5 != 0)))) {
          puVar11 = &DAT_ffff8000824d360c;
          goto LAB_ffff8000800d8d00;
        }
      }
      else {
        puVar11 = &DAT_ffff8000824ee4f4;
LAB_ffff8000800d8d00:
        FUN_ffff8000800f068c(puVar11,s_tfa_set_bf_ffff8000824d3601,-100 - iVar5);
      }
      local_4c[0] = 0;
      uVar10 = 0xff00;
      if (*(char *)(param_1 + 5) != '\x01') {
        uVar10 = 0x2200;
      }
      uVar12 = 0x2224;
      if (*(char *)(param_1 + 5) == '\x01') {
        uVar12 = 0xffffffff;
      }
      iVar5 = (**(code **)(param_1 + 0x18))(param_1,uVar10 >> 8,local_4c);
      if ((iVar5 != 0) && (iVar5 != -100)) goto LAB_ffff8000800d8dbc;
      iVar5 = 0xf;
LAB_ffff8000800d8d6c:
      uVar10 = uVar12 >> 4 & 0xf;
      uVar1 = iVar5 << (ulong)uVar10;
      uVar13 = (uint)local_4c[0];
      uVar10 = uVar13 & (~(-1 << (ulong)((uVar12 & 0xf) + 1)) << (ulong)uVar10 ^ 0xffffffffU);
      local_4c[0] = (ushort)uVar10 | (ushort)uVar1;
      if (((uVar13 == (uVar10 | uVar1 & 0xffff)) ||
          (iVar5 = (**(code **)(param_1 + 0x1a))(param_1,uVar12 >> 8 & 0xff), iVar5 == -100)) ||
         (iVar5 == 0)) goto LAB_ffff8000800d8ddc;
      puVar11 = &DAT_ffff8000824d360c;
    }
    FUN_ffff8000800f068c(puVar11,s_tfa_set_bf_ffff8000824d3601,-100 - iVar5);
LAB_ffff8000800d8ddc:
    if (param_1[0x40] == 0) {
      FUN_ffff800081a51f70(param_1);
      iVar4 = FUN_ffff800081a52164(param_1,0,param_2);
      if (iVar4 == 0) {
        if (*(code **)(param_1 + 0x3a) != (code *)0x0) {
          (**(code **)(param_1 + 0x3a))(param_1,0);
        }
        FUN_ffff8000800f068c
                  (&DAT_ffff8000823fd90d,s_tfa_dev_start_ffff8000823fd8ff,
                   s_tfa_dev_start_ffff8000823fd8ff);
        FUN_ffff8000800d8090(param_1,5,0);
        FUN_ffff8000800f068c
                  (&DAT_ffff800082482dd7,s_tfa_dev_start_ffff8000823fd8ff,
                   s_tfa_dev_start_ffff8000823fd8ff);
        iVar4 = 0;
        goto LAB_ffff8000800d8e58;
      }
      puVar11 = &DAT_ffff800082326b1a;
    }
    else {
LAB_ffff8000800d8e58:
      iVar5 = (**(code **)(param_1 + 0x2e))(param_1);
      if ((param_2 != iVar5) && (-1 < iVar5)) {
        iVar5 = FUN_ffff800081a4ba94(param_1,param_2,param_3);
        iVar4 = 0;
        if (iVar5 != 0) {
          puVar11 = &DAT_ffff8000823e25fe;
          iVar4 = iVar5;
          goto LAB_ffff8000800d9050;
        }
      }
      FUN_ffff8000800f068c
                (&DAT_ffff800082392155,s_tfa_dev_start_ffff8000823fd8ff,
                 s_tfa_dev_start_ffff8000823fd8ff);
      uVar6 = FUN_ffff800081a4c674(*(undefined8 *)(param_1 + 0x44),*param_1,param_2);
      lVar8 = FUN_ffff800080234c60(uVar6,s__standby_ffff800082418594);
      if (lVar8 != 0) {
        (**(code **)(param_1 + 0x2c))(param_1,param_2 + 1);
        (**(code **)(param_1 + 0x30))(param_1,*(ushort *)(param_1 + 0xd) + 1);
        goto LAB_ffff8000800d9060;
      }
      FUN_ffff800081a51f70(param_1);
      local_4c[0] = 0;
      uVar9 = 9;
      if (*(char *)(param_1 + 5) != '\x01') {
        uVar9 = 0;
      }
      iVar4 = (**(code **)(param_1 + 0x18))(param_1,uVar9,local_4c);
      if ((iVar4 == -100) || (iVar4 == 0)) {
        if ((local_4c[0] >> 2 & 1) != 0) goto LAB_ffff8000800d8f70;
LAB_ffff8000800d8fac:
        iVar4 = FUN_ffff800081a4d060(param_1,param_2);
        if (iVar4 == 0) {
          (**(code **)(param_1 + 0x2c))(param_1,param_2 + 1);
          (**(code **)(param_1 + 0x30))(param_1,*(ushort *)(param_1 + 0xd) + 1);
          if ((param_1[0x42] != 0) &&
             ((*(char *)((long)param_1 + 0x12) == -0x78 ||
              (*(char *)((long)param_1 + 0x12) == '\x13')))) {
            local_4c[0] = 0;
            iVar4 = (**(code **)(param_1 + 0x18))(param_1,0xc6,local_4c);
            if (((iVar4 == -100) || (iVar4 == 0)) && ((local_4c[0] >> 6 & 1) == 0)) {
              FUN_ffff8000800f068c(&DAT_ffff80008258ebb0,s_tfa_dev_start_ffff8000823fd8ff);
            }
          }
          iVar4 = 0;
          goto LAB_ffff8000800d9060;
        }
      }
      else {
        FUN_ffff8000800f068c(&DAT_ffff8000824ee4f4,s_tfa_get_bf_ffff8000825740df,-100 - iVar4);
        if (-100 - iVar4 == 0) goto LAB_ffff8000800d8fac;
LAB_ffff8000800d8f70:
        if ((param_3 == -1) || (param_3 == param_1[0xd])) goto LAB_ffff8000800d8fac;
        iVar4 = FUN_ffff800081a4c730(param_1,param_2,param_3);
        if (iVar4 == 0) {
          FUN_ffff8000800f068c(&DAT_ffff8000825dde36,s_tfa_dev_start_ffff8000823fd8ff);
          goto LAB_ffff8000800d8fac;
        }
      }
      puVar11 = &DAT_ffff800082559515;
    }
LAB_ffff8000800d9050:
    FUN_ffff8000800f068c(puVar11,s_tfa_dev_start_ffff8000823fd8ff,iVar4);
  }
LAB_ffff8000800d9060:
  FUN_ffff8000800f068c
            (&DAT_ffff8000823fd933,s_tfa_dev_start_ffff8000823fd8ff,s_tfa_dev_start_ffff8000823fd8ff
            );
  FUN_ffff800081a51f70(param_1);
  if (iVar4 == 0) {
    uVar6 = 0;
    lVar8 = sp_el0;
    if (*(long *)(lVar8 + 0x508) != local_48) {
LAB_ffff8000800d90e8:
                    /* WARNING: Subroutine does not return */
      FUN_ffff800081e56064(uVar6);
    }
  }
  else {
    FUN_ffff8000800f068c(&DAT_ffff800082559540,s_tfa_dev_start_ffff8000823fd8ff,iVar4);
    uVar6 = 7;
    lVar8 = sp_el0;
    if (*(long *)(lVar8 + 0x508) != local_48) goto LAB_ffff8000800d90e8;
  }
  return;
}





