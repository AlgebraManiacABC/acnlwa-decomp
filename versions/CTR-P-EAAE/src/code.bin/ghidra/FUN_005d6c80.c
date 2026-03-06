/**
 * FUN_005d6c80.c
 * Source line: 885183
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005d6c80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xec);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0xdc);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0xd8);
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  iVar1 = *(int *)(param_1 + 0xf0);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0xdc);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar1 + 0xd8);
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
  }
  return;
}
