/**
 * FUN_00193368.c
 * Source line: 205660
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00193368(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00529c80(0x23e,param_1,0);
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  DAT_0094fd58 = DAT_0094fd58 & 0xffffff7f;
  return;
}
