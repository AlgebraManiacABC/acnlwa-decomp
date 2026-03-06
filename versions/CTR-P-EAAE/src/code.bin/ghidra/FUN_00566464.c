/**
 * FUN_00566464.c
 * Source line: 808396
 * Body lines: 7
 */
#include "../../../include/types.h"

bool FUN_00566464(int param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 5) == '\0';
  if (bVar1) {
    *(undefined1 *)(param_1 + 5) = 2;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return bVar1;
}
