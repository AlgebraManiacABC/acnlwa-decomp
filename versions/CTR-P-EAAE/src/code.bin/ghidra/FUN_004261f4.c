/**
 * FUN_004261f4.c
 * Source line: 589863
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_004261f4(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0xd9214824;
  *param_1 = 4;
  if (*(code **)(param_1 + 8) != NULL) {
          // WARNING: Could not recover jumptable at 0x00426218. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(param_1 + 8))(0xd9214824,*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}
