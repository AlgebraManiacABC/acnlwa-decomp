/**
 * FUN_005b19c8.c
 * Source line: 863173
 * Body lines: 4
 */
#include "../../../include/types.h"

bool FUN_005b19c8(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 4) + -1;
  *(char *)(param_1 + 4) = cVar1;
  return '\0' < cVar1;
}
