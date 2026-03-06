/**
 * FUN_006762d0.c
 * Source line: 981755
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_006762d0(int param_1)

{
  int iVar1;
  
  FUN_002e6368(param_1 + 0x13c0);
  Item_Copy((Item_t *)(param_1 + 0x93c),(Item_t *)&DAT_0095bfdc);
  FUN_0067bc50(param_1);
  iVar1 = FUN_002fe8a4(*(undefined1 *)(param_1 + 0x1ac));
  if (iVar1 != 0) {
    Item_Copy((Item_t *)(iVar1 + 0x26),(Item_t *)&DAT_0095bfdc);
  }
  *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) & 0xf7;
  *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x17b) & 0xf7;
  return;
}
