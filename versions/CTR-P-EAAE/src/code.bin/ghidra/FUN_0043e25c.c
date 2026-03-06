/**
 * FUN_0043e25c.c
 * Source line: 605125
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0043e25c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_1 + 8) {
    do {
      *(undefined1 *)(iVar1 + 10) = 0;
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_1 + 8);
  }
  return;
}
