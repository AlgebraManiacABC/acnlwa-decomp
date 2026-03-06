/**
 * FUN_0054a77c.c
 * Source line: 790880
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0054a77c(undefined4 *param_1)

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
  FUN_002ffb64(iVar1 + -0x134);
  return;
}
