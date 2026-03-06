/**
 * FUN_005b2294.c
 * Source line: 863369
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005b2294(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_001405e8(param_2);
  *(undefined4 *)(param_1 + 0xd14) = uVar1;
  *(uint *)(param_1 + 0xd18) = param_3;
  *(bool *)(param_1 + 0xd1c) = param_3 < 0x10000;
  return;
}
