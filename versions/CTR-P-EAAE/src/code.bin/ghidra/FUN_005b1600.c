/**
 * FUN_005b1600.c
 * Source line: 862854
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_005b1600(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &UNK_00907f94;
  if (param_1[0x24] != 0) {
    puVar1 = (undefined4 *)FUN_001416b0();
    (**(code **)(*(int *)*puVar1 + 4))((int *)*puVar1,param_1[0x24]);
  }
  FUN_002ffb64(param_1);
  return;
}
