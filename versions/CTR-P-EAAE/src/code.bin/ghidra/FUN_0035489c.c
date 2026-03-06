/**
 * FUN_0035489c.c
 * Source line: 455892
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0035489c(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc);
  if (*(int *)(iVar2 + 0x10) == iVar3) {
    cVar1 = '\0';
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    cVar1 = *(char *)(*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0xc) + iVar3);
    *(int *)(param_1 + 0xc) = iVar3 + 1;
  }
  *(bool *)param_2 = cVar1 != '\0';
  return;
}
