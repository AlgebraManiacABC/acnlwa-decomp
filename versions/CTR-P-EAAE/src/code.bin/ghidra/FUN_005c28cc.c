/**
 * FUN_005c28cc.c
 * Source line: 872025
 * Body lines: 11
 */
#include "../../../include/types.h"

char FUN_005c28cc(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_005c33d0(param_1,0);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x1a9);
  }
  if (iVar2 != 0 && cVar1 != '\0') {
    cVar1 = '\x01';
  }
  return cVar1;
}
