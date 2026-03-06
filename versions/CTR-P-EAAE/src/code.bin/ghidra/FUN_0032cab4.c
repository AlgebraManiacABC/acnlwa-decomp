/**
 * FUN_0032cab4.c
 * Source line: 432065
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0032cab4(int param_1,Item_t *param_2)

{
  char cVar1;
  
  cVar1 = Item_GetRawID(param_2);
  *(char *)(param_1 + 0x11) = cVar1 + -0x67;
  cVar1 = Item_GetRawID(param_2);
  if (0x22 < (byte)(cVar1 + 0x99U)) {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  return;
}
