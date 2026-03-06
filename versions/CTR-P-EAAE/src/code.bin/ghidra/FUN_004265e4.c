/**
 * FUN_004265e4.c
 * Source line: 590178
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_004265e4(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  if (param_2 - 0x100000U < 0x3ff00000) {
    uVar2 = FUN_00426cd8(param_2);
    *param_1 = uVar2;
    uVar1 = FUN_00426ccc(param_2 + 4);
    *(undefined2 *)(param_1 + 1) = uVar1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xe0e14826;
  }
  return uVar2;
}
