/**
 * FUN_003cc160.c
 * Source line: 538366
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_003cc160(int param_1,int param_2)

{
  *(char *)(param_1 + 0x22) = (char)param_2;
  if ((param_2 == 5) && (*(code **)(param_1 + 0x18) != NULL)) {
          // WARNING: Could not recover jumptable at 0x003cc17c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(param_1 + 0x18))(param_1,param_1 + 0x1c);
    return;
  }
  return;
}
