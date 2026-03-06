/**
 * FUN_002a9728.c
 * Source line: 348023
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_002a9728(undefined4 param_1,undefined2 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  uVar2 = thunk_FUN_008b1b88(6);
  *param_2 = uVar2;
  *(undefined1 *)(param_2 + 1) = 6;
  *(undefined4 *)(param_2 + 2) = 0x1000725;
  uVar1 = thunk_FUN_008b1b88(6);
  *(undefined1 *)(param_2 + 4) = uVar1;
  return;
}
