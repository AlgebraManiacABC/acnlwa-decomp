/**
 * FUN_0053e9dc.c
 * Source line: 783409
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0053e9dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  if (((piVar3 != NULL) && ((char)piVar3[0x13] != '\0')) &&
     (iVar1 = (**(code **)(*piVar3 + 0x20))(piVar3,param_1), iVar1 != 0)) {
          // WARNING: Could not recover jumptable at 0x0053ea3c. Too many branches
          // WARNING: Treating indirect jump as call
    uVar2 = (**(code **)(*piVar3 + 0x40))(piVar3,param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}
