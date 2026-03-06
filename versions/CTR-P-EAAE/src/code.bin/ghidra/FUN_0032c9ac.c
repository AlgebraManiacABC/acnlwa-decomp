/**
 * FUN_0032c9ac.c
 * Source line: 432002
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0032c9ac(int param_1,Item_t *param_2)

{
  char cVar1;
  
  cVar1 = Item_GetRawID(param_2);
  *(char *)(param_1 + 0x14) = cVar1 + '?';
  cVar1 = Item_GetRawID(param_2);
  if (8 < (byte)(cVar1 + 0x3fU)) {
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}
