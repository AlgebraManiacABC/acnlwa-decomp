/**
 * FUN_0043e2b4.c
 * Source line: 605159
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0043e2b4(int param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_1 + 8) {
    do {
      if ((*(int *)(iVar1 + 0xc) == *param_2) && (*(int *)(iVar1 + 0x10) == param_2[1])) {
        *(undefined1 *)(iVar1 + 0xb) = param_3;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_1 + 8);
    return;
  }
  return;
}
