/**
 * FUN_004bead4.c
 * Source line: 700743
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004bead4(int param_1,int param_2,byte *param_3,int param_4)

{
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_18 = (float)*param_3 * 0.003921569;
  local_14 = (float)param_3[1] * 0.003921569;
  local_10 = (float)param_3[2] * 0.003921569;
  local_c = (float)*(byte *)(param_4 + 3) * 0.003921569;
  FUN_007acdd8(*(undefined4 *)(param_1 + param_2 * 4 + 0x2a0),1,&local_18);
  return;
}
