/**
 * FUN_00395374.c
 * Source line: 502597
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00395374(int param_1)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = 0;
  iVar1 = FUN_0048859c(&local_10,*(undefined4 *)(param_1 + 8));
  if (iVar1 < 0) {
    FUN_00486bfc();
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}
