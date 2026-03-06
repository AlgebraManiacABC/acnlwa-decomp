/**
 * FUN_00609f5c.c
 * Source line: 922922
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00609f5c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_005cd270(param_1 + 0x28);
  uVar2 = 0;
  if (DAT_009506c3 != '\0') {
    uVar2 = 0x20;
  }
  DAT_009506c3 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x28000800;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  iVar1 = FUN_00304640(param_1 + 0x28);
  if (iVar1 != 0) {
    FUN_0081c0a0(param_1);
  }
  return;
}
