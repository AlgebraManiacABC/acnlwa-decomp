/**
 * FUN_005ceb34.c
 * Source line: 880875
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_005ceb34(void)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(DAT_0094e3c8 + 0x14);
  uVar1 = *(uint *)(DAT_0094e3c8 + 0x18);
  if ((UNRECOVERED_JUMPTABLE == NULL) && (((uVar1 & 1) == 0 || (uVar1 == 0)))) {
    return;
  }
  if ((uVar1 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(int *)(DAT_0094e3c8 + ((int)uVar1 >> 1)));
  }
          // WARNING: Could not recover jumptable at 0x005ceb78. Too many branches
          // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
