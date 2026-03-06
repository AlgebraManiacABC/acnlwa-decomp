/**
 * FUN_002f6de8.c
 * Source line: 389069
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002f6de8(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x1730);
  *(uint *)(param_1 + 0x1804) = *(uint *)(param_1 + 0x1804) & 0xfffffff7;
  FUN_002f6b14(piVar1);
  if ((*(uint *)(param_1 + 0x1804) & 1) != 0 || (*(uint *)(param_1 + 0x1804) & 2) != 0) {
    (**(code **)(*piVar1 + 0x34))(piVar1);
    *(undefined4 *)(param_1 + 0x17e4) = 0;
    *(uint *)(param_1 + 0x1804) = *(uint *)(param_1 + 0x1804) & 0xfffffffc;
    *(code **)(param_1 + 0x17e8) = FUN_002f64d8;
    *(undefined4 *)(param_1 + 0x17ec) = 0;
  }
  return;
}
