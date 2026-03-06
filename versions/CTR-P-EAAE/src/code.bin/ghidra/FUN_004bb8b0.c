/**
 * FUN_004bb8b0.c
 * Source line: 698450
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004bb8b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[0x4f];
  *param_1 = &PTR_LAB_00901c70;
  if ((puVar1 != NULL) && ((*(byte *)((int)puVar1 + 0x4d) & 1) == 0)) {
    (**(code **)*puVar1)(puVar1);
    FUN_0013ad90(puVar1);
    param_1[0x4f] = 0;
  }
  FUN_004be300(param_1 + 0x54);
  FUN_004b793c(param_1);
  return;
}
