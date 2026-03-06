/**
 * FUN_002c2974.c
 * Source line: 362700
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_002c2974(Item_t *param_1,int *param_2)

{
  if ((int *)*param_2 != NULL) {
          // WARNING: Could not recover jumptable at 0x002c2988. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*(int *)*param_2 + 0x44))();
    return;
  }
  Item_Set(param_1,0x7ffe);
  return;
}
