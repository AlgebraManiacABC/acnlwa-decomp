/**
 * FUN_005a4a68.c
 * Source line: 852856
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_005a4a68(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &UNK_00907dac;
  if (param_1[0x23] != 0) {
    puVar1 = (undefined4 *)FUN_001416b0();
    (**(code **)(*(int *)*puVar1 + 4))((int *)*puVar1,param_1[0x23]);
  }
  FUN_002ffb64(param_1);
  return;
}
