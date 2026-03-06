/**
 * FUN_0054a7dc.c
 * Source line: 790900
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_0054a7dc(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_00905410;
  param_1[0x4d] = &UNK_00905434;
  iVar1 = param_1[0x51];
  if (iVar1 != 0) {
    FUN_0013bb00(*(int *)(iVar1 + 0x158) + (int)param_1);
    *(int *)(iVar1 + 0x154) = *(int *)(iVar1 + 0x154) + -1;
    param_1[0x51] = 0;
  }
  iVar1 = FUN_0013efb4(param_1 + 0x4d);
  return iVar1 + -0x134;
}
