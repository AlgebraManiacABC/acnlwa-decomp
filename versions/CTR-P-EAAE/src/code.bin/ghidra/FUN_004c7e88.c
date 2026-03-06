/**
 * FUN_004c7e88.c
 * Source line: 707676
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_004c7e88(int param_1,uint *param_2,uint param_3)

{
  uint _n;
  
  _n = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x1c);
  if (param_3 <= _n) {
    _n = param_3;
  }
  __rt_memcpy(param_2,(uint *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c)),_n);
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + _n;
  return _n;
}
