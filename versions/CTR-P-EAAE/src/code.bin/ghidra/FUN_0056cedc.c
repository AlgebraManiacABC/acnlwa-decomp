/**
 * FUN_0056cedc.c
 * Source line: 814068
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0056cedc(int *param_1,int param_2)

{
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 auStack_10 [8];
  
  local_14 = (int)*(short *)((int)param_1 + 10);
  local_1c = (int)(char)param_1[2];
  local_20 = (int)*(char *)((int)param_1 + 7);
  local_18 = param_2;
  FUN_0012f974(auStack_10,*param_1,(int)(char)param_1[1],(int)*(char *)((int)param_1 + 5));
  FUN_001264f0(&local_20,auStack_10);
  *param_1 = local_20;
  param_1[1] = local_1c;
  param_1[2] = local_18;
  return;
}
