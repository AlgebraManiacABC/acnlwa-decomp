/**
 * FUN_0020c124.c
 * Source line: 268568
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0020c124(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ranqd2_ranged_int_from_seed_2(100);
  if (iVar1 < 10) {
    uVar2 = FUN_00312434(param_1,1,0);
    return uVar2;
  }
  return 0;
}
