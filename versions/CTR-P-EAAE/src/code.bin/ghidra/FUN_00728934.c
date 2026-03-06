/**
 * FUN_00728934.c
 * Source line: 1081803
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00728934(uint *param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != NULL) {
    iVar1 = FUN_00100d2c(param_2,param_1,8);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
