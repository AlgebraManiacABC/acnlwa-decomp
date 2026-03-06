/**
 * FUN_00606d70.c
 * Source line: 921682
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00606d70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x13) = 1;
  uVar1 = FUN_0051fe30();
  iVar2 = FUN_00747a90(uVar1,*(undefined4 *)(param_1 + 4));
  if (iVar2 == 0) {
    FUN_00520a4c(uVar1,*(undefined4 *)(param_1 + 4));
    return;
  }
  return;
}
