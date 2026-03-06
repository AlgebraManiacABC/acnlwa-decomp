/**
 * FUN_004d7e6c.c
 * Source line: 719915
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined8 FUN_004d7e6c(int param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x24) != '\0') {
    param_2 = (uint *)FUN_004b8ff8();
  }
  puVar1 = param_2;
  if ((param_3 & 1) == 0) {
    uVar2 = __rt_memcpy(param_2,*(uint **)(param_1 + 0x14),*(uint *)(param_1 + 0x18));
    puVar1 = (uint *)((ulonglong)uVar2 >> 0x20);
    param_2 = (uint *)((*(uint *)(param_1 + 0x18) & 0xfffffffc) + (int)param_2);
  }
  return CONCAT44(puVar1,param_2);
}
