/**
 * FUN_00750dbc.c
 * Source line: 1107263
 * Body lines: 7
 */
#include "../../../include/types.h"

byte FUN_00750dbc(int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((*(int *)(param_1 + 0x5f0) != 0) &&
     (bVar1 = *(byte *)(*(int *)(param_1 + 0x5f0) + 0xf), 0x31 < bVar1)) {
    bVar1 = 0;
  }
  return bVar1;
}
