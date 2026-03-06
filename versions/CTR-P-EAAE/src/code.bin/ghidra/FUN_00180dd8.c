/**
 * FUN_00180dd8.c
 * Source line: 197999
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00180dd8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(char *)(param_2 + 2) < '2') {
    FUN_0056ca68(&local_14,*param_2,(int)*(char *)(param_2 + 1),(int)*(char *)((int)param_2 + 5),
                 *(char *)((int)param_2 + 7) + 1,0,0);
  }
  else {
    FUN_0056ca68(&local_14,*param_2,(int)*(char *)(param_2 + 1),(int)*(char *)((int)param_2 + 5),
                 *(char *)((int)param_2 + 7) + 2,0,0);
  }
  *param_1 = local_14;
  param_1[1] = uStack_10;
  param_1[2] = uStack_c;
  return;
}
