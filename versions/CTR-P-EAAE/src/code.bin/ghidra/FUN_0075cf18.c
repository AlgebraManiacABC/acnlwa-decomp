/**
 * FUN_0075cf18.c
 * Source line: 1117519
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_0075cf18(uint param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 == '\b') {
    param_1 = (uint)*(byte *)(param_1 + 6);
  }
  return cVar1 == '\b' && param_1 == 5 || (cVar1 == '\0' || cVar1 == '\a');
}
