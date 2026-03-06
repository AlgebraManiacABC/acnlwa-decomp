/**
 * FUN_00114c9c.c
 * Source line: 114649
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00114c9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_00314ce4(&ranqd2_seed_1,param_1,param_3,param_4,param_4);
  iVar1 = 0;
  do {
    iVar2 = 0;
    do {
      FUN_002ffc8c(0x1e,iVar2 + 1,iVar1 + 1,2,2);
      iVar2 += 1;
    } while (iVar2 < 2);
    iVar1 += 1;
  } while (iVar1 < 2);
  return;
}
