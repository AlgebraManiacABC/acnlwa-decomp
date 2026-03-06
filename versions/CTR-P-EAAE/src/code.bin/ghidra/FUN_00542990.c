/**
 * FUN_00542990.c
 * Source line: 786193
 * Body lines: 10
 */
#include "../../../include/types.h"

FUN_00542990(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(int **)(iRam009752b8 + 0x18) + 0x14))();
  if (iVar2 == 0) {
    uVar1 = FUN_004c09b0(param_1 + 4,param_2,param_3,param_4,param_5);
  }
  else {
    uVar1 = 0x80;
  }
  return uVar1;
}
