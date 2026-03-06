/**
 * FUN_00736ac4.c
 * Source line: 1092022
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_00736ac4(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 != 0 && param_2 != 0) {
    uVar1 = strlen(param_2);
    iVar2 = FUN_00736a1c(param_1,param_2,uVar1);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0xc);
      if (iVar3 != 0) {
        return iVar2 + 0xc + iVar3;
      }
    }
  }
  return 0;
}
