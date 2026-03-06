/**
 * FUN_0014335c.c
 * Source line: 155707
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0014335c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(**(int **)(iRam009752b8 + 0x14) + 0x28))(*(int **)(iRam009752b8 + 0x14),param_2);
  iVar2 = *(int *)(param_1 + 0xc);
  for (iVar1 = *(int *)(param_1 + 4) - iVar2; iVar1 != param_1 - *(int *)(param_1 + 0xc);
      iVar1 = *(int *)(iVar1 + iVar2 + 4) - iVar2) {
    if (*(char *)(iVar1 + 0xc) == param_2) {
      *(undefined1 *)(iVar1 + 0xc) = 0xff;
    }
  }
  return;
}
