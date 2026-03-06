/**
 * FUN_00744b04.c
 * Source line: 1101023
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00744b04(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x44))(*(int **)(param_1 + 4),param_2);
  if ((iVar1 != 0) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x44))(*(int **)(param_1 + 8),param_2),
     uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
