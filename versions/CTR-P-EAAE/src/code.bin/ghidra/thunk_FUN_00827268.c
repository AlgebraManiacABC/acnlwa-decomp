/**
 * thunk_FUN_00827268.c
 * Source line: 412323
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 thunk_FUN_00827268(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < *param_1) {
    uVar1 = *(undefined4 *)(param_1[2] + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
