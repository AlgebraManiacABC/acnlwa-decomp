/**
 * FUN_00747064.c
 * Source line: 1103158
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00747064(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int **)(param_1 + 0x18) == NULL) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x14))(), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
