/**
 * FUN_005b1644.c
 * Source line: 862870
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 * FUN_005b1644(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &UNK_00907f94;
  if (param_1[0x24] != 0) {
    puVar1 = (undefined4 *)FUN_001416b0();
    (**(code **)(*(int *)*puVar1 + 4))((int *)*puVar1,param_1[0x24]);
  }
  return param_1;
}
