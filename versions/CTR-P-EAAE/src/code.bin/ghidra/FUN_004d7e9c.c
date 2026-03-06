/**
 * FUN_004d7e9c.c
 * Source line: 719935
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined8 FUN_004d7e9c(int param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_2;
  if ((param_3 & 1) == 0) {
    uVar2 = __rt_memcpy(param_2,*(uint **)(param_1 + 0x14),*(uint *)(param_1 + 0x18));
    puVar1 = (uint *)((ulonglong)uVar2 >> 0x20);
    param_2 = (uint *)((*(uint *)(param_1 + 0x18) & 0xfffffffc) + (int)param_2);
  }
  return CONCAT44(puVar1,param_2);
}
