/**
 * FUN_00412eb0.c
 * Source line: 579304
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00412eb0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1 == NULL) || (iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,param_2), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0x3c) = param_2;
  }
  return uVar3;
}
