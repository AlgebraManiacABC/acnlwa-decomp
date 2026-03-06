/**
 * FUN_0072abfc.c
 * Source line: 1083391
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0072abfc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_003d0bb4(*(undefined4 *)(param_2 + 4),L"GameSession");
  if ((iVar1 != 0) ||
     (iVar1 = FUN_003d0bb4(*(undefined4 *)(param_2 + 4),&UNK_008aee40), uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
