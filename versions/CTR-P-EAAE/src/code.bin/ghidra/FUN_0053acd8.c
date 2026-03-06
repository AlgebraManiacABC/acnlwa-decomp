/**
 * FUN_0053acd8.c
 * Source line: 780566
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_0053acd8(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_00100e5c(iVar3,iVar2,param_2,&uStack_8);
  if ((iVar1 < 0) || (iVar2 <= iVar1)) {
    iVar1 = iVar2 + -1;
    *(undefined1 *)(iVar3 + iVar2 + -1) = 0;
  }
  return iVar1;
}
