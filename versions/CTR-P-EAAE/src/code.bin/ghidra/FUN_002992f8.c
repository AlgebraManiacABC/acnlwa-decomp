/**
 * FUN_002992f8.c
 * Source line: 339256
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002992f8(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x6fa) = 0;
  iVar1 = FUN_006d1e64();
  if (*(char *)(*(int *)(iVar1 + 500) + 0x4d1) == '\0') {
    FUN_002993ac(param_1,0);
  }
  if ((0.5 < *(float *)(param_1 + 0x724) / *(float *)(param_1 + 0x748)) &&
     (*(int *)(param_1 + 0x71c) < *(int *)(param_1 + 0x720))) {
    *(int *)(param_1 + 0x71c) = *(int *)(param_1 + 0x71c) + 1;
  }
  FUN_002982f0(param_1,*(undefined4 *)(param_1 + 0x71c));
  return;
}
