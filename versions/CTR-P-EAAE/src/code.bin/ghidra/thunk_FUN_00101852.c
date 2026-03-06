/**
 * thunk_FUN_00101852.c
 * Source line: 105250
 * Body lines: 5
 */
#include "../../../include/types.h"

int thunk_FUN_00101852(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  
  for (; (uVar1 = (uint)*param_1, uVar1 != 0 && (uVar1 == *param_2)); param_1 = param_1 + 1) {
    param_2 = param_2 + 1;
  }
  return uVar1 - *param_2;
}
