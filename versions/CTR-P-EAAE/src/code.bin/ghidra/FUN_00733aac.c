/**
 * FUN_00733aac.c
 * Source line: 1089339
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00733aac(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0xa4) == '\x03') &&
     (cVar1 = *(char *)(param_1 + 0x90), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    uVar2 = *(undefined4 *)(param_1 + 0x94);
  }
  else {
    uVar2 = 0xe0a14827;
  }
  return uVar2;
}
