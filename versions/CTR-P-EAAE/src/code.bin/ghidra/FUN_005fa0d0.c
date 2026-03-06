/**
 * FUN_005fa0d0.c
 * Source line: 910529
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005fa0d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + 0x34c);
  FUN_005e4a28(iVar2);
  *(undefined1 *)(iVar2 + 6) = 1;
  iVar1 = FUN_0075a3a8(param_2,*(undefined4 *)(iVar2 + 0xc),8);
  *(undefined4 *)(iVar2 + 8) = 8;
  *(undefined1 *)(iVar2 + 0xc4) = 0;
  iVar2 = *(int *)(param_1 + 0x8c);
  *(undefined1 *)(iVar2 + 0x21) = 1;
  *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 1;
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar1 * 2;
  }
  return;
}
