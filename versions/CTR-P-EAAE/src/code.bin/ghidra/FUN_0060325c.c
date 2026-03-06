/**
 * FUN_0060325c.c
 * Source line: 919016
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0060325c(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x37c) = 0;
  iVar1 = *(int *)(param_1 + 0x358);
  if (*(char *)(iVar1 + 5) != '\0') {
    if ((*(byte *)(iVar1 + 4) & 99) == 0) {
      FUN_0058d4f8(0xa7,100);
    }
    *(undefined1 *)(iVar1 + 5) = 0;
  }
  return;
}
