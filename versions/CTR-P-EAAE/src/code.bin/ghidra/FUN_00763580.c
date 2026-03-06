/**
 * FUN_00763580.c
 * Source line: 1122173
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00763580(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x1a9);
  if ((cVar1 == -0x39 || cVar1 == -0x38) || (cVar1 == -0x37 || cVar1 == -0x36)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
