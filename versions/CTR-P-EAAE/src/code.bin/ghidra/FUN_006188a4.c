/**
 * FUN_006188a4.c
 * Source line: 930191
 * Body lines: 13
 */
#include "../../../include/types.h"

void * FUN_006188a4(int param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (*(char *)(param_1 + 0x13266) == '\x06') {
    iVar1 = FUN_00629438(param_1 + 0x7874,2);
    if ((iVar1 != 0) && (iVar1 = FUN_0075f1c4(param_1 + 0x7874,2), iVar1 != 0)) {
      FUN_0062a724(param_1 + 0xb0);
      *(undefined1 *)(param_1 + 0x13266) = 2;
      *(undefined1 *)(param_1 + 0x132b0) = 1;
      pvVar2 = GET_DAT_0095bf74();
      return pvVar2;
    }
  }
  return NULL;
}
