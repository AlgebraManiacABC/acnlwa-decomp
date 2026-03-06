/**
 * FUN_0032ca78.c
 * Source line: 432049
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0032ca78(int param_1,Item_t *param_2)

{
  char cVar1;
  
  cVar1 = Item_GetRawID(param_2);
  *(char *)(param_1 + 0x15) = cVar1 + -0x26;
  cVar1 = Item_GetRawID(param_2);
  if (0x15 < (byte)(cVar1 - 0x26U)) {
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  return;
}
