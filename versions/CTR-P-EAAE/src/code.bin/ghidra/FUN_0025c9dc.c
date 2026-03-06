/**
 * FUN_0025c9dc.c
 * Source line: 307459
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0025c9dc(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_002f6b14(param_1 + 0x49c);
  FUN_00132478(param_1 + 0x49c);
  uVar1 = FUN_001cb78c(param_1 + 0x4c);
  if (*(int **)(param_1 + 0xa34c) != NULL) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0xa34c) + 0x24))();
    uVar1 = uVar2 & uVar1;
  }
  if (uVar1 != 0) {
    uRam00950000 = 0;
    return 2;
  }
  return 3;
}
