/**
 * FUN_007302b8.c
 * Source line: 1086935
 * Body lines: 5
 */
#include "../../../include/types.h"

undefined4 FUN_007302b8(int param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_00135748(param_1 + 0x1204);
  uVar1 = (**(code **)**(undefined4 **)(param_1 + 0x1210))();
  thunk_FUN_001357ec(param_1 + 0x1204);
  return uVar1;
}
