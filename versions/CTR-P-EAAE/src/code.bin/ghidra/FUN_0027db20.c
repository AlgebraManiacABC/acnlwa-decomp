/**
 * FUN_0027db20.c
 * Source line: 325833
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0027db20(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001e90bc(*(undefined1 *)(param_1 + 0xc9));
  if (uVar1 < 8) {
    iVar2 = uVar1 * 0xc + 0x9841ec;
  }
  else {
    iVar2 = 0x984204;
  }
  FUN_004ee3e8(param_1 + 0xd4,iVar2);
  return;
}
