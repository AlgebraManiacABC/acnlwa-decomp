/**
 * FUN_0045b6a8.c
 * Source line: 624354
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0045b6a8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x16) == '\x01') {
    if (param_1[0x19] - 0x100000 < 0x3ff00000) {
      FUN_0044ffd0();
    }
    FUN_0044d748(param_1 + 1);
    param_1[0x18] = 0;
    (**(code **)*param_1)(param_1);
    FUN_0045b3e4(param_1,2);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0a14827;
  }
  return uVar1;
}
