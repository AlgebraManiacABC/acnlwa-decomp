/**
 * FUN_002e9988.c
 * Source line: 383718
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_002e9988(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = FUN_002e9440(param_1);
    FUN_002e9878(param_1,param_2,iVar1);
    if (iVar1 < -5) {
      uVar2 = 0;
    }
    else {
      uVar2 = iVar1 + 5U & 0xff;
    }
  }
  return uVar2;
}
