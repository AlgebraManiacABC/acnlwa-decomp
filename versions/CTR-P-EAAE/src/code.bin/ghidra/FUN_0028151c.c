/**
 * FUN_0028151c.c
 * Source line: 327678
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0028151c(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_005783f4();
  *(undefined1 *)(param_1 + 0x2545) = 0;
  FUN_00304224(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x2550) = 3;
  UNRECOVERED_JUMPTABLE = pcRam0094dce8;
  if ((uRam0094dcec & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pcRam0094dce8 + *(int *)(param_1 + ((int)uRam0094dcec >> 1)))
    ;
  }
          // WARNING: Could not recover jumptable at 0x00281570. Too many branches
          // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
