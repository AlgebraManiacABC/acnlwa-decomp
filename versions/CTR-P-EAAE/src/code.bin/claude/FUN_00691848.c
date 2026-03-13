/**
 * FUN_00691848.c
 * Source line: 996764
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00691848(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 4) {
    uVar1 = *(undefined4 *)(param_1 + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
