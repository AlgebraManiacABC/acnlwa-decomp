/**
 * FUN_00292d8c.c
 * Source line: 336155
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_00292d8c(undefined1 param_1)

{
  bool bVar1;
  
  bVar1 = DAT_00950712 == '\0';
  if (bVar1) {
    DAT_00950711 = 1;
    DAT_00950712 = '\x01';
    DAT_00950713 = param_1;
  }
  return bVar1;
}
