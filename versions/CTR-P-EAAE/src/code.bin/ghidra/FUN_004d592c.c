/**
 * FUN_004d592c.c
 * Source line: 718221
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_004d592c(float param_1,float *param_2)

{
  if (param_1 < *param_2) {
          // WARNING: Could not recover jumptable at 0x004d5948. Too many branches
          // WARNING: Treating indirect jump as call
    (*(code *)(&PTR_LAB_008a2990)[*(byte *)(param_2 + 2)])();
    return;
  }
  if (param_2[1] <= param_1) {
          // WARNING: Could not recover jumptable at 0x004d5964. Too many branches
          // WARNING: Treating indirect jump as call
    (*(code *)(&PTR_LAB_008a299c)[*(byte *)((int)param_2 + 9)])();
    return;
  }
  return;
}
