/**
 * FUN_005be0fc.c
 * Source line: 868677
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_005be0fc(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 8) = 0x21;
  FUN_00303cdc(param_1);
  *(undefined1 *)(param_1 + 9) = 0xff;
  iVar1 = 0;
  *(undefined1 *)(param_1 + 10) = 9;
  do {
    FUN_003084d0(param_1 + iVar1 * 0x30 + 0xc);
    iVar1 += 1;
  } while (iVar1 < 2);
  Item_Copy((Item_t *)(param_1 + 0x6c),(Item_t *)&DAT_0095bfdc);
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  return;
}
