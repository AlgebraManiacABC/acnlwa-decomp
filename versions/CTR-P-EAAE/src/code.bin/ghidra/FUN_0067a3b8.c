/**
 * FUN_0067a3b8.c
 * Source line: 983803
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0067a3b8(int param_1)

{
  int iVar1;
  
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    FUN_00316f9c(param_1,0x2a);
  }
  *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) & 0xf7;
  *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x17b) & 0xf7;
  FUN_002e6368(param_1 + 0x13c0);
  Item_Copy((Item_t *)(param_1 + 0x93c),(Item_t *)&DAT_0095bfdc);
  FUN_0067bc50(param_1);
  iVar1 = FUN_002fe8a4(*(undefined1 *)(param_1 + 0x1ac));
  if (iVar1 != 0) {
    Item_Copy((Item_t *)(iVar1 + 0x26),(Item_t *)&DAT_0095bfdc);
    return;
  }
  return;
}
