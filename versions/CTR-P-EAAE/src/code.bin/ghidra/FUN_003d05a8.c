/**
 * FUN_003d05a8.c
 * Source line: 542204
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_003d05a8(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_003d089c(param_1,*(int *)(param_2 + 0x18) + *(int *)(param_2 + 0xc),
                       *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18),local_10,param_3,1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x10) = local_10[0];
  }
  return;
}
