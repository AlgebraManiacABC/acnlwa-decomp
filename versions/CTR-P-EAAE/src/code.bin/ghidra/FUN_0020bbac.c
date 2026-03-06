/**
 * FUN_0020bbac.c
 * Source line: 268192
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_0020bbac(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 * 2;
  iVar1 = FUN_0020bd70(param_1,iVar2,1);
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      iVar2 += 1;
    }
    else if (iVar1 == 3) {
      iVar2 = ranqd2_ranged_int_from_seed_2(2);
      return iVar2 + param_2 * 2;
    }
  }
  return iVar2;
}
