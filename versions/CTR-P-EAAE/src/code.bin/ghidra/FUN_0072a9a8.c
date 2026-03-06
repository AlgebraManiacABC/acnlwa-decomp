/**
 * FUN_0072a9a8.c
 * Source line: 1083322
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_0072a9a8(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x9c);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x22);
  }
  return iVar2 != 0 && cVar1 != '\x05';
}
