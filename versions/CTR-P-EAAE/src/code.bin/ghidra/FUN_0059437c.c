/**
 * FUN_0059437c.c
 * Source line: 842365
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0059437c(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  while ((iVar3 = *(int *)(param_1 + uVar2 * 4), iVar3 == 0 || (*(int *)(iVar3 + 0x114) != param_2))
        ) {
    uVar2 += 1;
    if (99 < uVar2) {
      return 0;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + uVar2 * 4);
  *(undefined4 *)(param_1 + uVar2 * 4) = 0;
  return uVar1;
}
