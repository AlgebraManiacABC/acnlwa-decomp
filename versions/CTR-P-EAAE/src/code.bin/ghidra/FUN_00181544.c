/**
 * FUN_00181544.c
 * Source line: 198054
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00181544(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_14 = *param_2;
  uStack_10 = param_2[1];
  uStack_c = param_2[2];
  FUN_0056ca68(&local_14,*param_2,(int)*(char *)(param_2 + 1),(int)*(char *)((int)param_2 + 5),
               *(char *)((int)param_2 + 7) + 0xc,(int)*(char *)(param_2 + 2),0);
  *param_1 = local_14;
  param_1[1] = uStack_10;
  param_1[2] = uStack_c;
  return;
}
