/**
 * FUN_002904ec.c
 * Source line: 334692
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined1 * FUN_002904ec(int param_1)

{
  int iVar1;
  undefined1 auStack_20 [24];
  
  FUN_005f723c(auStack_20);
  iVar1 = FUN_005d46dc();
  if (iVar1 == 8) {
    FUN_005f6eb0(auStack_20,0x9980c0,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c),
                 7,1);
  }
  else {
    FUN_005f6eb0(auStack_20,0x9980c0,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c),
                 7,4);
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x78))(*(int **)(param_1 + 8),0x997f88,0);
  return auStack_20;
}
