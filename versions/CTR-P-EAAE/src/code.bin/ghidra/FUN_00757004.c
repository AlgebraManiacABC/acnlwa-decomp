/**
 * FUN_00757004.c
 * Source line: 1112533
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00757004(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 + 8);
  if ((cVar1 == '\x14' || cVar1 == '\x15') || (cVar1 == '\x16')) {
    uVar2 = 6;
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}
