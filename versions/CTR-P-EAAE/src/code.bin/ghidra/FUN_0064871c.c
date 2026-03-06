/**
 * FUN_0064871c.c
 * Source line: 958478
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0064871c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0xf0) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xf0) + 0x1028);
  }
  if (iVar1 != 0 && _DAT_00aaf14c != 0) {
    uVar2 = FUN_00113828();
    *(undefined4 *)(param_1 + 0x25c) = uVar2;
  }
  return;
}
