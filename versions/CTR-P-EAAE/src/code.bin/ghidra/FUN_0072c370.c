/**
 * FUN_0072c370.c
 * Source line: 1084001
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_0072c370(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_003d0bb4(*(undefined4 *)(param_2 + 4),L"MatchmakeSession");
  if ((iVar1 != 0) || (iVar1 = FUN_0072a794(param_1,param_2), uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
