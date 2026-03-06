/**
 * FUN_003083e4.c
 * Source line: 406439
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_003083e4(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined *local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  local_10 = 0;
  local_18 = &UNK_0090a570;
  iVar1 = FUN_0075c348(param_1,&local_18);
  if (iVar1 == 0) {
    (**(code **)(*param_2 + 0x1c))(param_2);
  }
  else {
    (**(code **)(*param_2 + 0x14))(param_2,&local_18);
  }
  return iVar1;
}
