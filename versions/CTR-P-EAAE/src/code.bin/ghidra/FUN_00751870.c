/**
 * FUN_00751870.c
 * Source line: 1107838
 * Body lines: 14
 */
#include "../../../include/types.h"

byte FUN_00751870(int param_1)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x5f0) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(*(int *)(param_1 + 0x5f0) + 0x11);
    if (0x55 < bVar1) {
      bVar1 = 0;
    }
    if (*(char *)(param_1 + 0x5ec) == '\x02' && bVar1 == 0) {
      bVar1 = 1;
    }
  }
  return bVar1;
}
