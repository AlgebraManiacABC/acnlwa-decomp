/**
 * FUN_0027d44c.c
 * Source line: 325326
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_0027d44c(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0xc9);
  if (((cVar1 == 'H' || cVar1 == 'I') || cVar1 == 'J') && (iVar2 = FUN_00599c6c(), iVar2 == 0)) {
    return 0;
  }
  return 1;
}
