/**
 * FUN_002e5810.c
 * Source line: 380687
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002e5810(int *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[0x1f] = param_2 + 0x110;
  iVar1 = FUN_00304ce4(param_1 + 0x114);
  iVar1 = FUN_002cf87c(iVar1 + -0x310);
  *(undefined **)(iVar1 + -0xc4) = &DAT_008f5ad4;
  *(undefined **)(iVar1 + -0x140) = &DAT_008f59cc;
  iVar1 = FUN_005dd284();
  FUN_003170d0(iVar1 + -0x7c);
  FUN_002ffb64();
  return;
}
