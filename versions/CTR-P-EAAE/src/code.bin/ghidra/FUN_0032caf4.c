/**
 * FUN_0032caf4.c
 * Source line: 432097
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0032caf4(int param_1,Item_t *param_2)

{
  char cVar1;
  
  cVar1 = Item_GetRawID(param_2);
  *(char *)(param_1 + 0x10) = cVar1 + '_';
  cVar1 = Item_GetRawID(param_2);
  if (0x1f < (byte)(cVar1 + 0x5fU)) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}
