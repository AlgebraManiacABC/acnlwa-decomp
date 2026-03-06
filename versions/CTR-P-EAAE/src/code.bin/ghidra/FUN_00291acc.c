/**
 * FUN_00291acc.c
 * Source line: 335383
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00291acc(int param_1)

{
  int iVar1;
  
  iVar1 = (int)*(char *)(param_1 + 0xaab);
  if (iVar1 < 0xd) {
    if (iVar1 == 0) {
      iVar1 = 0xc;
    }
  }
  else {
    iVar1 += -0xc;
  }
  FUN_00291a18(param_1,iVar1,4,*(undefined4 *)(param_1 + 0x678),*(undefined4 *)(param_1 + 0x67c));
  return;
}
