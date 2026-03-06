/**
 * FUN_005e44f0.c
 * Source line: 894242
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005e44f0(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (uint)*(byte *)(param_1 + 4) * 8;
  UNRECOVERED_JUMPTABLE = *(code **)(&DAT_00891984 + iVar1);
  if ((*(uint *)(&DAT_00891988 + iVar1) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(int *)(param_1 + ((int)*(uint *)(&DAT_00891988 + iVar1) >> 1)));
  }
          // WARNING: Could not recover jumptable at 0x005e4518. Too many branches
          // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
