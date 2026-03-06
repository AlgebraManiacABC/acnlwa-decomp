/**
 * FUN_00724118.c
 * Source line: 1078886
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00724118(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x19);
  if ((cVar1 == '\a' || cVar1 == '\b') || (cVar1 == '\t')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
