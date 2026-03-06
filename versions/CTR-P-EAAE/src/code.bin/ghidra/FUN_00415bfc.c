/**
 * FUN_00415bfc.c
 * Source line: 581525
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00415bfc(int param_1)

{
  if (*(code **)(param_1 + 0x78) != NULL) {
          // WARNING: Could not recover jumptable at 0x00415c18. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(param_1 + 0x78))
              (2,*(undefined1 *)(*(int *)(param_1 + 0x14) + 0xe),*(undefined4 *)(param_1 + 0x7c));
    return;
  }
  return;
}
