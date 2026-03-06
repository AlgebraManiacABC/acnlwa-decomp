/**
 * FUN_0080806c.c
 * Source line: 1211406
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0080806c(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    do {
      FUN_0080806c(param_1,*(undefined4 *)(param_2 + 0xc));
      iVar1 = *(int *)(param_2 + 8);
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
      *(int *)(param_1 + 4) = param_2;
      param_2 = iVar1;
    } while (iVar1 != 0);
    return;
  }
  return;
}
