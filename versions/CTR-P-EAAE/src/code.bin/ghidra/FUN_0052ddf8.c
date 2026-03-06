/**
 * FUN_0052ddf8.c
 * Source line: 772589
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined2 FUN_0052ddf8(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  GET_BYTE_00957322();
  iVar2 = FUN_005b4c94();
  if (iVar2 != 0) {
    uVar3 = FUN_0060c5c4(0);
    uVar1 = FUN_0075d2f8(uVar3,param_1,param_2);
    return uVar1;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return 0;
}
