/**
 * FUN_005bb66c.c
 * Source line: 867291
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005bb66c(Item_t *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = Item_Set(param_1,0x341c);
  *(ushort *)(iVar1 + 2) = *(byte *)(param_2 + 0x272) & 7 | *(ushort *)(iVar1 + 2) & 0xc000;
  return;
}
