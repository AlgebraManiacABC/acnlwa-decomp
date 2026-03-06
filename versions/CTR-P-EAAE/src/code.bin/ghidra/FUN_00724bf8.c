/**
 * FUN_00724bf8.c
 * Source line: 1079179
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00724bf8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_00745f10(param_2,param_3);
  if (iVar1 != 0 && param_4 != 0) {
    *(bool *)param_4 = (~*(uint *)(iVar1 + 0x3c) & 0x200) == 0;
  }
  return;
}
