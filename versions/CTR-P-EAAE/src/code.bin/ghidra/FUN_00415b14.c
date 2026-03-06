/**
 * FUN_00415b14.c
 * Source line: 581436
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00415b14(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0xe0a14827;
  if ((*(char *)(param_1 + 0x74) == '\x05') &&
     (cVar1 = *(char *)(param_1 + 0x60), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    uVar2 = *(undefined4 *)(param_1 + 100);
  }
  return uVar2;
}
