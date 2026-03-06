/**
 * FUN_0013ea18.c
 * Source line: 151093
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0013ea18(undefined4 *param_1)

{
  if (*(int *)*param_1 == -0x80000000) {
          // WARNING: Could not recover jumptable at 0x0013ea40. Too many branches
          // WARNING: Treating indirect jump as call
    (*pcRam0097511c)();
    return;
  }
  if (*(int *)*param_1 == 0x40000000) {
          // WARNING: Could not recover jumptable at 0x0013ea38. Too many branches
          // WARNING: Treating indirect jump as call
    (*pcRam00975120)();
    return;
  }
  return;
}
