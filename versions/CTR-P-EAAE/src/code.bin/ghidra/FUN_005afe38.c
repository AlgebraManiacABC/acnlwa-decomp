/**
 * FUN_005afe38.c
 * Source line: 861243
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 * FUN_005afe38(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &UNK_00907f64;
  puVar1 = (undefined4 *)FUN_001416b0();
  (**(code **)(*(int *)*puVar1 + 4))((int *)*puVar1,param_1[0xd]);
  *param_1 = &UNK_00907e0c;
  puVar1 = (undefined4 *)FUN_001416b0();
  (**(code **)(*(int *)*puVar1 + 4))((int *)*puVar1,param_1[3]);
  return param_1;
}
