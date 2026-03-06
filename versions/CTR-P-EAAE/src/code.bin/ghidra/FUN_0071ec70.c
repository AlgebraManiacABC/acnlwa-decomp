/**
 * FUN_0071ec70.c
 * Source line: 1076298
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0071ec70(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((*(int *)(param_1 + iVar2 * 4 + 0x210) < 1 &&
         (iVar1 = FUN_007207d8(param_1 + iVar2 * 0x18 + 0x14), iVar1 == 0))) {
    iVar2 += 1;
    if (3 < iVar2) {
      return 0;
    }
  }
  return 1;
}
