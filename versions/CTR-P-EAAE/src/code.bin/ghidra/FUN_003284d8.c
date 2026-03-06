/**
 * FUN_003284d8.c
 * Source line: 428676
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003284d8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_008f5230;
  iVar1 = FUN_0056988c(param_1 + 0xdb);
  *(undefined **)(iVar1 + -0x36c) = &DAT_008f194c;
  iVar1 = FUN_005e3194(iVar1 + -200);
  iVar1 = thunk_FUN_00569480(iVar1 + -0x170);
  *(undefined **)(iVar1 + -0x134) = &DAT_008ed374;
  FUN_00569774(iVar1 + -0x54,0);
  iVar1 = FUN_0056988c(iVar1 + -0x54);
  FUN_002b6ef8(iVar1 + -0xe0);
  return;
}
