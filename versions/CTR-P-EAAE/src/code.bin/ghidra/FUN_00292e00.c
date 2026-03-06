/**
 * FUN_00292e00.c
 * Source line: 336193
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00292e00(int param_1)

{
  int iVar1;
  
  iVar1 = (int)*(char *)(param_1 + 0xaab);
  if (0xb < iVar1) {
    iVar1 += -0xc;
  }
  FUN_00291a18(param_1,iVar1,6,*(undefined4 *)(param_1 + 0x678),*(undefined4 *)(param_1 + 0x67c));
  return;
}
