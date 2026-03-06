/**
 * FUN_0060cc58.c
 * Source line: 924116
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0060cc58(int param_1)

{
  int iVar1;
  
  FUN_001b0180();
  iVar1 = *(int *)(param_1 + 0xe2f54);
  if (*(int *)(param_1 + 0x1f14) != iVar1) {
    *(undefined4 *)(param_1 + 0x12cc + iVar1 * 4 + 0xc4c) = *(undefined4 *)(param_1 + 0xae8);
    *(undefined4 *)(param_1 + 0x12cc + *(int *)(param_1 + 0xe2f54) * 4 + 0xc5c) =
         *(undefined4 *)(param_1 + 0x940);
    FUN_00816b18(param_1,FUN_001c5240,0);
  }
  return;
}
