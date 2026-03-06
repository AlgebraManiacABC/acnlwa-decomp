/**
 * FUN_004372a4.c
 * Source line: 601290
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_004372a4(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x40);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x10);
  }
  return iVar2 != 0 && cVar1 != '\0';
}
