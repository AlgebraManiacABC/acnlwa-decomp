/**
 * FUN_0073e780.c
 * Source line: 1097015
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0073e780(int param_1,undefined4 param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  if (*(char *)(param_1 + 0x9c) == '\0') {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = FUN_007409c8();
  }
  *param_3 = uVar1;
  return 1;
}
