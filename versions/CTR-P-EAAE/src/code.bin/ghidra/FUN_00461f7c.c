/**
 * FUN_00461f7c.c
 * Source line: 629310
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00461f7c(undefined1 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00461970();
  if (*(char *)(iVar1 + 0x30) == '\0') {
    *(undefined1 *)(iVar1 + 8) = param_1;
  }
  return;
}
