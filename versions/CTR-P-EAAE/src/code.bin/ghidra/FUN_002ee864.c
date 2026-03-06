/**
 * FUN_002ee864.c
 * Source line: 385447
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined8 FUN_002ee864(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  
  bVar2 = *(int *)(param_1 + 0xd0) != 0;
  uVar1 = 0;
  if (bVar2) {
    uVar1 = *(uint *)(param_1 + 0xec);
  }
  if (!bVar2 || uVar1 <= param_3) {
    return CONCAT44(uVar1,param_1);
  }
  uVar3 = __rt_memcpy(param_2,(uint *)(*(int *)(param_1 + 0xd0) + param_3 * 0x28),0x28);
  return uVar3;
}
