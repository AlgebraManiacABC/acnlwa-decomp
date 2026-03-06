/**
 * FUN_0040dac0.c
 * Source line: 576942
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_0040dac0(int param_1)

{
  uint unaff_r5;
  undefined8 uVar1;
  
  uVar1 = FUN_00441bec(param_1,*(undefined1 *)(param_1 + 0x70),param_1 + 0x85,param_1 + 0x94,
                       param_1 + 0x98,0);
  if ((int)uVar1 < 0) {
    *(undefined **)(param_1 + 0x24) = &UNK_0044176c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined **)(param_1 + 0x2c) = &DAT_0040db5c;
    return (uint)((ulonglong)uVar1 >> 0x20) & 0xff00;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x40db90;
  *(code **)(param_1 + 0x24) = FUN_0040cf7c;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return unaff_r5 & 0xff00;
}
