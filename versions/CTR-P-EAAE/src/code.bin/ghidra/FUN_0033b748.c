/**
 * FUN_0033b748.c
 * Source line: 437863
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0033b748(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_007259d4();
  iVar1 = param_1 + iVar1 * 800 + 0x1234;
  FUN_006b1a64(iVar1,param_2);
  FUN_0081b648(iVar1,FUN_006b17fc,0);
  FUN_006b1aa0(-125.0 - fRam0095008c,iVar1);
  *(float *)(param_1 + 0x3b54) = fRam00950094 + fRam0095008c;
  return;
}
