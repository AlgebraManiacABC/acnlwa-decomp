/**
 * FUN_006c4804.c
 * Source line: 1023313
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_006c4804(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0xd) = 0;
  iVar1 = FUN_006158c4();
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(iVar1 + *(char *)(param_1 + 0xc) * 0x14 + 0x18);
  Item_Copy((Item_t *)(param_1 + 4),(Item_t *)&DAT_0095bfdc);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}
