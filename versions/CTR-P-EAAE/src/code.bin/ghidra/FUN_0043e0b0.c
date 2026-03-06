/**
 * FUN_0043e0b0.c
 * Source line: 605020
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0043e0b0(int param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == param_1 + 8) {
    return;
  }
  while ((*(int *)(iVar1 + 0xc) != *param_2 || (*(int *)(iVar1 + 0x10) != param_2[1]))) {
    iVar1 = *(int *)(iVar1 + 4);
    if (iVar1 == param_1 + 8) {
      return;
    }
  }
  *(undefined1 *)(iVar1 + 0x19) = param_3;
  return;
}
