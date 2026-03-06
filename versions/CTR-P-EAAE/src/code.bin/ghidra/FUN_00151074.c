/**
 * FUN_00151074.c
 * Source line: 165396
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined8 FUN_00151074(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 extraout_r2;
  undefined8 uVar2;
  
  uVar2 = FUN_001510d0(param_1,param_2 >> 0xb,param_3 >> 0xb | param_2 << 0x15,param_4 + -0x3c01);
  uVar1 = (uint)uVar2 & 0x7fffffff;
  if (uVar1 + 1 < 0x800) {
    return CONCAT44(extraout_r2,(int)((ulonglong)uVar2 >> 0x20) + uVar1 * 0x100000);
  }
  return 0x7ff00000;
}
