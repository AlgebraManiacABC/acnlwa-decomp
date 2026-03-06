/**
 * FUN_0075b438.c
 * Source line: 1116374
 * Body lines: 6
 */
#include "../../../include/types.h"

byte FUN_0075b438(int *param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(byte *)(*param_1 + 7) < 3) {
    bVar1 = *(byte *)(*param_1 + 7);
  }
  return bVar1;
}
