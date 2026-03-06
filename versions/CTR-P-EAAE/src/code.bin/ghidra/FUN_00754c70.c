/**
 * FUN_00754c70.c
 * Source line: 1110440
 * Body lines: 6
 */
#include "../../../include/types.h"

byte FUN_00754c70(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (1 < bVar1) {
    bVar1 = 2;
  }
  return bVar1;
}
