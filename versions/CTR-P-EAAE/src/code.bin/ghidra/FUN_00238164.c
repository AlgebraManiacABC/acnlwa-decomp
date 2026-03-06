/**
 * FUN_00238164.c
 * Source line: 289447
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_00238164(int param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x225) < '\0';
  if (bVar1) {
    FUN_005cd0a4();
  }
  return bVar1;
}
