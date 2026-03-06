/**
 * FUN_0072879c.c
 * Source line: 1081692
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined8 FUN_0072879c(int param_1,uint *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(uint *)(param_1 + 0x134) < param_3) {
    param_3 = *(uint *)(param_1 + 0x134);
  }
  uVar1 = 0;
  if (*(uint **)(param_1 + 0x138) != NULL) {
    uVar2 = __rt_memcpy(param_2,*(uint **)(param_1 + 0x138),param_3);
    uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  return CONCAT44(uVar1,*(undefined4 *)(param_1 + 0x134));
}
