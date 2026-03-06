/**
 * FUN_001b4a94.c
 * Source line: 221185
 * Body lines: 14
 */
#include "../../../include/types.h"

FUN_001b4a94(undefined2 *param_1,undefined4 param_2,undefined2 param_3,undefined1 param_4,
            astruct_7 *param_5)

{
  undefined1 *puVar1;
  int local_30 [3];
  undefined1 auStack_24 [16];
  
  *param_1 = param_3;
  FUN_005fdf68(auStack_24,param_2,9);
  FUN_00604890(local_30,param_1 + 1,9);
  (**(code **)(local_30[0] + 0x14))(local_30,auStack_24);
  *(undefined1 *)(param_1 + 10) = param_4;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  if (param_5 != NULL) {
    puVar1 = (undefined1 *)astruct_7_Copy((astruct_7 *)(param_1 + 0xb),param_5);
    return puVar1;
  }
  return auStack_24;
}
