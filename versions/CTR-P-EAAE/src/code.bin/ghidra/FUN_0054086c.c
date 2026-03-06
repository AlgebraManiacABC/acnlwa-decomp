/**
 * FUN_0054086c.c
 * Source line: 784853
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0054086c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  local_8 = param_4;
  if (param_2 != 0) {
    iVar1 = FUN_0014214c(param_1 + 4,&local_8);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = local_8;
    }
    return uVar2;
  }
  uVar2 = FUN_00142288(param_1 + 4,0,param_3,param_4);
  return uVar2;
}
