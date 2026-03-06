/**
 * FUN_005a4aac.c
 * Source line: 852872
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 * FUN_005a4aac(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &UNK_00907dac;
  if (param_1[0x23] != 0) {
    puVar1 = (undefined4 *)FUN_001416b0();
    (**(code **)(*(int *)*puVar1 + 4))((int *)*puVar1,param_1[0x23]);
  }
  return param_1;
}
