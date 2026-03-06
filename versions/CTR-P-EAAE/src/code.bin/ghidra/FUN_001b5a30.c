/**
 * FUN_001b5a30.c
 * Source line: 221656
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_001b5a30(int param_1,undefined2 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined2 *)(param_1 + 0xe) = param_2;
  uVar1 = FUN_0070bf30(param_3);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  FUN_002fae84();
  return;
}
