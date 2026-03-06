/**
 * FUN_0065fd08.c
 * Source line: 970290
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0065fd08(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 0x171);
  if ((bVar1 & 1) != 0) {
    *(byte *)(param_1 + 0x171) = bVar1 & 0xfe;
    Item_Copy((Item_t *)(param_1 + 0x93c),(Item_t *)&DAT_0095bfdc);
    FUN_0067bc50(param_1);
    iVar2 = FUN_002fe8a4(*(undefined1 *)(param_1 + 0x1ac));
    if (iVar2 != 0) {
      Item_Copy((Item_t *)(iVar2 + 0x26),(Item_t *)&DAT_0095bfdc);
      return;
    }
  }
  return;
}
