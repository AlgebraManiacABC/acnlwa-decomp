/**
 * FUN_00377ee8.c
 * Source line: 482706
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_00377ee8(int param_1,undefined4 param_2)

{
  (**(code **)(iRam00add94c + 8))(0xadd94c);
  *(undefined4 *)(param_1 + 0xc) = param_2;
          // WARNING: Could not recover jumptable at 0x00377f1c. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(iRam00add94c + 0xc))(0xadd94c);
  return;
}
