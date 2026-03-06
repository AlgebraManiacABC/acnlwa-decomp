/**
 * FUN_00441a44.c
 * Source line: 606842
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_00441a44(int *param_1)

{
  uint unaff_r5;
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x3c))(param_1);
  if ((int)uVar1 != 0) {
    param_1[9] = (int)&UNK_004417f8;
    param_1[10] = 0;
    param_1[0xb] = (int)"ProcessHostMigrationJob::HostMigrationSuccess";
    return unaff_r5 & 0xff00;
  }
  return (uint)((ulonglong)uVar1 >> 0x20) & 0xff00 | 5;
}
