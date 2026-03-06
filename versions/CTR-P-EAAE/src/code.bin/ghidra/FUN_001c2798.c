/**
 * FUN_001c2798.c
 * Source line: 229296
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_001c2798(int *param_1)

{
  int iVar1;
  
  FUN_00521a00();
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if (iVar1 != 0) {
    FUN_004ee364(param_1 + 10,param_1[5]);
  }
  return 2;
}
