/**
 * FUN_0013f33c.c
 * Source line: 151717
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_0013f33c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0014192c(*(undefined4 *)(param_1 + 4),param_2,param_3,0);
  piVar2 = NULL;
  if (iVar1 != 0) {
    piVar2 = *(int **)(param_1 + 8);
  }
  if (iVar1 != 0 && piVar2 != NULL) {
    if ((char)piVar2[1] != '\0') {
      (**(code **)(*piVar2 + 0x30))(piVar2,param_2,param_3,0);
    }
    iVar1 = 1;
  }
  return iVar1;
}
