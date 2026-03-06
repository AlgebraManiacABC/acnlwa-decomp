/**
 * FUN_00751a20.c
 * Source line: 1107975
 * Body lines: 6
 */
#include "../../../include/types.h"

byte FUN_00751a20(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x7b4);
  if (1 < bVar1) {
    bVar1 = 0;
  }
  return bVar1;
}
