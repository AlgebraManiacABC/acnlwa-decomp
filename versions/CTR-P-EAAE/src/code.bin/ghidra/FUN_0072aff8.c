/**
 * FUN_0072aff8.c
 * Source line: 1083422
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0072aff8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_003d0bb4(*(undefined4 *)(param_2 + 4),L"UserMessage");
  if ((iVar1 != 0) ||
     (iVar1 = FUN_003d0bb4(*(undefined4 *)(param_2 + 4),&UNK_0089d394), uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
