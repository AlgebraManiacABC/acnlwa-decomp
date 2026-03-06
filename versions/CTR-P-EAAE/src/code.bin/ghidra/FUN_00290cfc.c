/**
 * FUN_00290cfc.c
 * Source line: 334962
 * Body lines: 7
 */
#include "../../../include/types.h"

bool FUN_00290cfc(undefined1 param_1)

{
  bool bVar1;
  
  bVar1 = DAT_00950712 == '\0';
  if (bVar1) {
    DAT_00950712 = '\x01';
    DAT_00950713 = param_1;
  }
  return bVar1;
}
