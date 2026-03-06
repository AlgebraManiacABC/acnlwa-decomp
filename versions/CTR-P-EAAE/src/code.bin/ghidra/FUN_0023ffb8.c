/**
 * FUN_0023ffb8.c
 * Source line: 294168
 * Body lines: 13
 */
#include "../../../include/types.h"

bool FUN_0023ffb8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_c = 0;
  iVar1 = FUN_00527528(&local_10,&local_c,param_2);
  if (iVar1 != 0) {
    FUN_006a5f0c(param_1,local_10,local_c);
    uVar2 = FUN_006c7540(param_1,0);
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  return iVar1 != 0;
}
