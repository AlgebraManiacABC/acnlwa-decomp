/**
 * FUN_0063161c.c
 * Source line: 948045
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0063161c(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x660) + 0x20e);
  FUN_005783f4(param_1);
  FUN_0051db9c(0);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x1034) = 0xff;
  }
  FUN_00631d5c(param_1 + 0xfe0,param_1);
  return;
}
