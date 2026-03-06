/**
 * FUN_001837f0.c
 * Source line: 199298
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_001837f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_14 = *param_2;
  uStack_10 = param_2[1];
  local_c = param_2[2];
  FUN_00312ab8(&local_14,1,0xfffffffa,0,0);
  FUN_0056cce4(&local_14,6);
  FUN_0056ce84(&local_14,0);
  FUN_0056cedc(&local_14,0);
  FUN_0056cbe8(&local_14,0);
  *param_1 = local_14;
  param_1[1] = uStack_10;
  param_1[2] = local_c;
  return;
}
