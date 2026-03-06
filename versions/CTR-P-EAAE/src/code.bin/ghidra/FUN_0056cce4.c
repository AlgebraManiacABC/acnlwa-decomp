/**
 * FUN_0056cce4.c
 * Source line: 813953
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0056cce4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 local_20;
  int iStack_1c;
  int iStack_18;
  int local_14;
  undefined1 auStack_10 [8];
  
  local_14 = (int)*(short *)((int)param_1 + 10);
  iStack_18 = (int)*(char *)((int)param_1 + 9);
  iStack_1c = (int)*(char *)(param_1 + 2);
  local_20 = param_2;
  FUN_0012f974(auStack_10,*param_1,(int)*(char *)(param_1 + 1),(int)*(char *)((int)param_1 + 5));
  FUN_001264f0(&local_20,auStack_10);
  *param_1 = local_20;
  param_1[1] = iStack_1c;
  param_1[2] = iStack_18;
  return;
}
