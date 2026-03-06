/**
 * FUN_00749134.c
 * Source line: 1104871
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00749134(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x1c);
  if ((cVar1 == '\x03' || cVar1 == '\x04') || (cVar1 == '\x05' || cVar1 == '\x06')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
