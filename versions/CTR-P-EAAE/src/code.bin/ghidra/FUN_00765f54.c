/**
 * FUN_00765f54.c
 * Source line: 1124374
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_00765f54(int param_1)

{
  uint uVar1;
  
  if ((*(code **)(param_1 + 0x20) == FUN_00694990) && (*(int *)(param_1 + 0x24) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 ^ 1;
}
