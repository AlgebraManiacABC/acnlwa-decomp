/**
 * FUN_00752e58.c
 * Source line: 1109094
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00752e58(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002f74e0(0x8000);
  if (((iVar1 == 0) || (iVar1 = FUN_002f74e0(0x2000,param_2), iVar1 != 0)) && (param_3 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
