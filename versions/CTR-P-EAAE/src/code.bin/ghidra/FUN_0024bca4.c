/**
 * FUN_0024bca4.c
 * Source line: 299874
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0024bca4(int param_1,uint param_2,Item_t *param_3)

{
  undefined2 uVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0xc) & 7) != 4) {
    iVar2 = 0;
    while (param_2 != (*(byte *)(param_1 + iVar2 * 4 + 0x12) & 0xf)) {
      iVar2 += 1;
      if (6 < iVar2) {
        return;
      }
    }
    uVar1 = Item_GetRawID(param_3);
    *(undefined2 *)(param_1 + iVar2 * 4 + 0x14) = uVar1;
  }
  return;
}
