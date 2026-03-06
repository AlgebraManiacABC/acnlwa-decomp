/**
 * FUN_003cc130.c
 * Source line: 538343
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_003cc130(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (0 < iVar1) {
    FUN_003cc160(param_1,1);
    *(int *)(param_1 + 0x24) = iVar1;
    return;
  }
  *(undefined1 *)(param_1 + 0x22) = 5;
  if (*(code **)(param_1 + 0x18) == NULL) {
    return;
  }
          // WARNING: Could not recover jumptable at 0x003cc17c. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(param_1 + 0x18))(param_1,param_1 + 0x1c);
  return;
}
