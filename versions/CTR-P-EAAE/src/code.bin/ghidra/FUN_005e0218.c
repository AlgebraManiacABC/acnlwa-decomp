/**
 * FUN_005e0218.c
 * Source line: 891608
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined8 FUN_005e0218(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = (uint)param_2[5] >> 1;
  uVar2 = (int)*(uint **)(param_1 + 0xa0) + uVar1 * 2;
  if (uVar2 <= *(uint *)(param_1 + 0xa4)) {
    uVar3 = __rt_memcpy(*(uint **)(param_1 + 0xa0),(uint *)*param_2,uVar1 << 1);
    param_2 = (undefined4 *)((ulonglong)uVar3 >> 0x20);
    uVar1 = (uint)uVar3;
    *(uint *)(param_1 + 0xa0) = uVar2;
  }
  return CONCAT44(param_2,uVar1);
}
