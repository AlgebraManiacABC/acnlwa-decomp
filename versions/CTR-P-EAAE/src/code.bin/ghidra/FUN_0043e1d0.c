/**
 * FUN_0043e1d0.c
 * Source line: 605089
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined1 FUN_0043e1d0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_1 + 8) {
    do {
      if ((*(int *)(iVar1 + 0xc) == *param_2) && (*(int *)(iVar1 + 0x10) == param_2[1])) {
        return *(undefined1 *)(iVar1 + 9);
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_1 + 8);
  }
  return 0;
}
