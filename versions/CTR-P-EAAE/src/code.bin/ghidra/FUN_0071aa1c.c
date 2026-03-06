/**
 * FUN_0071aa1c.c
 * Source line: 1073264
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0071aa1c(Item_t *param_1,int *param_2)

{
  if ((int *)*param_2 != NULL) {
          // WARNING: Could not recover jumptable at 0x0071aa30. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*(int *)*param_2 + 0xa4))();
    return;
  }
  Item_CopyAndReturn(param_1,(Item_t *)&DAT_0095bfdc);
  return;
}
