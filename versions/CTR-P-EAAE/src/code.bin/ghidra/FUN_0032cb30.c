/**
 * FUN_0032cb30.c
 * Source line: 432113
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0032cb30(int param_1,Item_t *param_2)

{
  char cVar1;
  
  cVar1 = Item_GetRawID(param_2);
  *(char *)(param_1 + 0x13) = cVar1 + 'v';
  cVar1 = Item_GetRawID(param_2);
  if (0x16 < (byte)(cVar1 + 0x76U)) {
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  return;
}
