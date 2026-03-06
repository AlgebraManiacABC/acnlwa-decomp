/**
 * FUN_00733a8c.c
 * Source line: 1089295
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00733a8c(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0xa4) == '\x05') &&
     (cVar1 = *(char *)(param_1 + 0x90), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    uVar2 = *(undefined4 *)(param_1 + 0x94);
  }
  else {
    uVar2 = 0xe0a14827;
  }
  return uVar2;
}
