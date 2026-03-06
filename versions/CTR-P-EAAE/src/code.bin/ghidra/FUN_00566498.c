/**
 * FUN_00566498.c
 * Source line: 808411
 * Body lines: 7
 */
#include "../../../include/types.h"

bool FUN_00566498(int param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 5) == '\x01';
  if (bVar1) {
    *(undefined1 *)(param_1 + 5) = 3;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return bVar1;
}
