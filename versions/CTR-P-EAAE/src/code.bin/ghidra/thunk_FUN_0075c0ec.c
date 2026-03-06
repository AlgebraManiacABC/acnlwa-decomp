/**
 * thunk_FUN_0075c0ec.c
 * Source line: 403079
 * Body lines: 15
 */
#include "../../../include/types.h"

int thunk_FUN_0075c0ec(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = 0;
  uStack_10 = 0;
  puStack_18 = &UNK_0090a570;
  iVar1 = FUN_0075c400(param_1,&puStack_18);
  if (iVar1 == 0) {
    (**(code **)(*param_2 + 0x1c))(param_2);
  }
  else {
    (**(code **)(*param_2 + 0x14))(param_2,&puStack_18);
  }
  return iVar1;
}
