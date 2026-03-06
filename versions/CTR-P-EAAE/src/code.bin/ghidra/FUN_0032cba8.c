/**
 * FUN_0032cba8.c
 * Source line: 432147
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0032cba8(int param_1,Item_t *param_2)

{
  char cVar1;
  
  cVar1 = Item_GetRawID(param_2);
  *(char *)(param_1 + 0xe) = cVar1 + '6';
  if ((*(char *)(param_1 + 0xd) == '\b') && (cVar1 = Item_GetRawID(param_2), cVar1 != -0x36)) {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return;
}
