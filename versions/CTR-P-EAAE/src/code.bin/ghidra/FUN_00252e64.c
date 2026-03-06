/**
 * FUN_00252e64.c
 * Source line: 303784
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_00252e64(int param_1,code *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  for (puVar2 = *(undefined4 **)(param_1 + 0x1c); puVar2 != NULL; puVar2 = (undefined4 *)puVar2[1])
  {
    uVar1 = (*param_2)(*puVar2,param_3);
    uVar3 |= uVar1;
  }
  return uVar3;
}
