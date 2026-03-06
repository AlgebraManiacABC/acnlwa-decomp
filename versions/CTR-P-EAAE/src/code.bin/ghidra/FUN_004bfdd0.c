/**
 * FUN_004bfdd0.c
 * Source line: 702016
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined1 FUN_004bfdd0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,param_3);
  if (iVar2 == -1) {
    uVar1 = 2;
  }
  else {
    uVar1 = FUN_004bfe1c(param_1,param_2,iVar2,param_4);
  }
  return uVar1;
}
