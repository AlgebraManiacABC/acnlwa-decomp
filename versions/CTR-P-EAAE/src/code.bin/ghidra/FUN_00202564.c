/**
 * FUN_00202564.c
 * Source line: 261960
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00202564(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    iVar1 = FUN_007482bc(*param_1);
    iVar2 = FUN_00317148(*param_1,*param_2,param_2[1]);
    if (iVar2 != 0) {
      FUN_0057bd8c(iVar2,*(undefined2 *)(param_1[1] + (param_2[1] * iVar1 + *param_2) * 2));
      return;
    }
  }
  return;
}
