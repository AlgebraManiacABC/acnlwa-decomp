/**
 * FUN_0054375c.c
 * Source line: 786674
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0054375c(int param_1,uint param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xfc);
  if (0 < iVar1) {
    uVar2 = 0;
    do {
      if ((param_2 & 1 << (uVar2 & 0xff)) != 0) {
        *(undefined1 *)(param_1 + uVar2 + 0xac) = param_3;
        *(undefined1 *)(param_1 + uVar2 + 0xcc) = param_4;
      }
      iVar1 += -1;
      uVar2 += 1;
    } while (iVar1 != 0);
  }
  return;
}
