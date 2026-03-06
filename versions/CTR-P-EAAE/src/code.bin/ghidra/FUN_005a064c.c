/**
 * FUN_005a064c.c
 * Source line: 849955
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_005a064c(Item_t *param_1)

{
  int iVar1;
  
  iVar1 = Item_Clear(param_1);
  iVar1 = Item_Clear((Item_t *)(iVar1 + 4));
  iVar1 = Item_Clear((Item_t *)(iVar1 + 4));
  *(undefined1 *)(iVar1 + 10) = 0xa5;
  *(undefined1 *)(iVar1 + 0xb) = 0;
  *(undefined1 *)(iVar1 + 0xc) = 0;
  *(undefined1 *)(iVar1 + 7) = 0;
  *(undefined1 *)(iVar1 + 8) = 0;
  *(undefined1 *)(iVar1 + 9) = 0;
  *(undefined1 *)(iVar1 + 4) = 0;
  *(undefined1 *)(iVar1 + 5) = 0x28;
  *(undefined1 *)(iVar1 + 6) = 0;
  return;
}
