/**
 * FUN_0073e8e4.c
 * Source line: 1097141
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 * FUN_0073e8e4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int local_10;
  
  local_10 = param_4;
  iVar1 = FUN_00141a9c(param_1,&local_10,9);
  if (iVar1 == 0) {
    puVar2 = &DAT_00981880;
  }
  else {
    puVar2 = (undefined4 *)(local_10 + param_1 + *(int *)(local_10 + param_1 + 4));
  }
  return puVar2;
}
