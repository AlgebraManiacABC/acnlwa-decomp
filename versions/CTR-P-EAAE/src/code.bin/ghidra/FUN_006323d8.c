/**
 * FUN_006323d8.c
 * Source line: 948705
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006323d8(int param_1,undefined4 param_2,short param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00632488();
  if (iVar1 == 0) {
    param_2 = 0;
  }
  FUN_0051ddb8(param_1,param_2,param_3 * 0x708,param_4);
  *(undefined1 *)(param_1 + 0x39) = 1;
  return;
}
