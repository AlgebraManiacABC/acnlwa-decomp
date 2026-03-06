/**
 * FUN_0053ea48.c
 * Source line: 783429
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0053ea48(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  if ((piVar3 != NULL) && ((char)piVar3[0x13] != '\0' && param_3 != 0)) {
    iVar1 = (**(code **)(*piVar3 + 0x20))(piVar3,param_1,*(code **)(*piVar3 + 0x20),param_4,param_4)
    ;
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = (**(code **)(*piVar3 + 0x3c))(piVar3,param_2,param_1,param_3,param_4);
    }
    return uVar2;
  }
  return 0;
}
