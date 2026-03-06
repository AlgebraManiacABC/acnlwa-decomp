/**
 * FUN_004ccacc.c
 * Source line: 711902
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_004ccacc(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1 + param_2 * 0x10;
  if (*(int *)(iVar2 + 0x20) < *(int *)(iVar2 + 0x1c)) {
    FUN_004ccc48(param_1,param_2);
  }
  FUN_007e68a8(0x3f800000,iVar2 + 0x14,0);
  FUN_00462e80(0x3f800000);
  param_1 += param_2 * 0xc;
  piVar1 = (int *)(param_1 + 0x54);
  if (*piVar1 == 0) {
    FUN_00462ea0((int)(char)param_2,FUN_004ccd38,param_2);
  }
  FUN_0013e7d8(piVar1,param_1 + 0x58,param_3 + 4);
  return 1;
}
