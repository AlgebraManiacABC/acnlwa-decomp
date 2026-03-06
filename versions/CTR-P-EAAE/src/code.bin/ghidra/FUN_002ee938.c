/**
 * FUN_002ee938.c
 * Source line: 385505
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002ee938(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined *local_10;
  undefined4 local_c;
  
  local_10 = &DAT_009047f8;
  local_c = param_2;
  iVar1 = FUN_0056a974(param_1,&local_10,param_3,4);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0xec) = *(uint *)(param_1 + 0xd4) / 0x28;
  }
  return;
}
