/**
 * FUN_0029c3c8.c
 * Source line: 340971
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0029c3c8(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x284) != 0) {
    FUN_00135748(param_1 + 8);
    uVar1 = *(uint *)(param_1 + 0x298);
    FUN_001357ec(param_1 + 8);
    if (8 < uVar1) {
      if (*(byte *)(param_1 + 0x294) < 0x10) {
        *(undefined1 *)(param_1 + 0x294) = 8;
          // WARNING: Could not recover jumptable at 0x0029c790. Too many branches
          // WARNING: Treating indirect jump as call
        FUN_0029c5d4();
        return;
      }
      return;
    }
  }
  return;
}
