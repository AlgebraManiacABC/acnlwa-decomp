/**
 * FUN_0021c1a8.c
 * Source line: 275016
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0021c1a8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_001323bc();
  FUN_00569e6c(uVar1,param_1 + 0x530,0);
  if (*(char *)(param_1 + 0x3ba1) == '\0') {
    uVar1 = FUN_001323bc();
    FUN_00569e6c(uVar1,param_1 + 0x298,1);
  }
  if ((*(int *)(param_1 + 0x1fdc) != 0) &&
     ((*(undefined **)(param_1 + 0x34) != &UNK_0021b848 || (*(int *)(param_1 + 0x38) != 0)))) {
    uVar1 = FUN_001323bc();
    FUN_00569e6c(uVar1,param_1 + 0x3e4,1);
    (**(code **)(**(int **)(param_1 + 0x1fdc) + 0x14))();
  }
  switchD_000b7c78::caseD_9(param_1 + 0x10fc);
  return 2;
}
