/**
 * FUN_00501eb0.c
 * Source line: 746961
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00501eb0(int param_1)

{
  int iVar1;
  undefined4 local_10;
  float local_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(param_1 + 0x618) + 1;
  *(int *)(param_1 + 0x728) = iVar1;
  *(int *)(param_1 + 0x72c) = iVar1;
  local_10 = *(undefined4 *)(*(int *)(param_1 + 0x718) + 0x28);
  uStack_8 = *(undefined4 *)(*(int *)(param_1 + 0x718) + 0x30);
  local_c = *(float *)(param_1 + 0x724) +
            *(float *)(param_1 + 0x720) * (float)(longlong)*(int *)(param_1 + 0x728);
  FUN_004b71c8(*(undefined4 *)(param_1 + 0x718),&local_10);
  return;
}
