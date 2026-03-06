/**
 * FUN_00594358.c
 * Source line: 842351
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00594358(Item_t *param_1)

{
  int iVar1;
  
  iVar1 = Item_Clear(param_1);
  *(undefined1 *)(iVar1 + 4) = 0xa5;
  *(undefined1 *)(iVar1 + 5) = 0;
  *(undefined1 *)(iVar1 + 6) = 0;
  return;
}
