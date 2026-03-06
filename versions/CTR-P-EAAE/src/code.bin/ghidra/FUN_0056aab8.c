/**
 * FUN_0056aab8.c
 * Source line: 812156
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0056aab8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 + 0xe8);
  if ((cVar1 == '\x03' || cVar1 == '\x04') || (cVar1 == '\x05')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
