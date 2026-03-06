/**
 * FUN_00603500.c
 * Source line: 919153
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_00603500(int param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 4) == '\a';
  if (bVar1) {
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return bVar1;
}
