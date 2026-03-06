/**
 * FUN_002cf8bc.c
 * Source line: 369099
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_002cf8bc(Item_t *param_1)

{
  int iVar1;
  
  iVar1 = Item_Set(param_1,0x7ffe);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined1 *)(iVar1 + 0xc) = 0;
  return;
}
