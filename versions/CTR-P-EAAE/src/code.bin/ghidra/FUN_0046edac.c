/**
 * FUN_0046edac.c
 * Source line: 640235
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0046edac(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 != 0 && param_3 != 0) && param_4 != 0) {
    if (*(int *)(param_1 + 4) < 1) {
      uVar1 = 0xd8a0a064;
    }
    else {
      iVar2 = strlen(param_2);
      uVar1 = FUN_0046f32c(param_1 + 0xc,*(undefined4 *)(param_1 + 4),param_2,iVar2 + 1,param_3,
                           param_4);
    }
    return uVar1;
  }
  return 0xd8e0a002;
}
