/**
 * FUN_00577fc0.c
 * Source line: 821401
 * Body lines: 14
 */
#include "../../../include/types.h"

bool FUN_00577fc0(int param_1,short *param_2,undefined4 param_3,short *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = FUN_0057ba08(param_1 + 0x14,param_3,param_3,param_4,param_4);
  *param_2 = sVar1;
  iVar3 = (int)*param_4;
  iVar2 = (int)(short)(sVar1 - *(short *)(param_1 + 0x2e));
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  return iVar2 < iVar3;
}
