/**
 * FUN_004e9f00.c
 * Source line: 731760
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_004e9f00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 uVar1;
  int iVar2;
  
  *param_1 = param_3;
  param_1[1] = param_4;
  iVar2 = FUN_002fcb34(param_5);
  if (iVar2 == 0x2f) {
    uVar1 = FUN_002ffad8();
  }
  else {
    uVar1 = 0xff;
  }
  *(undefined1 *)(param_1 + 2) = uVar1;
  return;
}
