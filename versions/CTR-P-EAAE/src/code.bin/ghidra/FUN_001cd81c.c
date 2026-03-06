/**
 * FUN_001cd81c.c
 * Source line: 234378
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_001cd81c(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x68) + 0x58) =
       *(undefined4 *)(*(int *)(param_1 + 4) + 0x828);
  iVar1 = (uint)*(byte *)(((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x28) * 0x28 + -0x28
                         + *(int *)(param_1 + 8)) * 8;
  UNRECOVERED_JUMPTABLE = *(code **)(&UNK_00881128 + iVar1);
  if ((*(uint *)(&UNK_0088112c + iVar1) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(int *)(param_1 + ((int)*(uint *)(&UNK_0088112c + iVar1) >> 1)));
  }
          // WARNING: Could not recover jumptable at 0x001cd87c. Too many branches
          // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
