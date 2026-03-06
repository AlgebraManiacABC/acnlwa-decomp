/**
 * FUN_0054af38.c
 * Source line: 791300
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_0054af38(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = FUN_00100e5c(iVar3,iVar2,param_2,param_3);
  if ((iVar1 < 0) || (iVar2 <= iVar1)) {
    iVar1 = iVar2 + -1;
    *(undefined1 *)(iVar3 + iVar2 + -1) = 0;
  }
  return iVar1;
}
