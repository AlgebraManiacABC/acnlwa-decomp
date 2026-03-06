/**
 * FUN_00501290.c
 * Source line: 746721
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00501290(int param_1,int param_2)

{
  undefined4 local_10;
  float local_c;
  undefined4 uStack_8;
  
  local_10 = *(undefined4 *)(*(int *)(param_1 + 0x718) + 0x28);
  uStack_8 = *(undefined4 *)(*(int *)(param_1 + 0x718) + 0x30);
  local_c = *(float *)(param_1 + 0x724) + *(float *)(param_1 + 0x720) * (float)(longlong)param_2;
  FUN_004b71c8(*(undefined4 *)(param_1 + 0x718),&local_10);
  return;
}
