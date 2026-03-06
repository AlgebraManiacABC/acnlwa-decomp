/**
 * FUN_0073bf40.c
 * Source line: 1095444
 * Body lines: 8
 */
#include "../../../include/types.h"

byte FUN_0073bf40(int param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = 0;
  if ((*(int *)(param_1 + 8) != 0) &&
     (bVar1 = *(byte *)(*(int *)(param_1 + 8) + 0x18), bVar2 = bVar1 & 1, (bVar1 & 1) != 0)) {
    bVar2 = 1;
  }
  return bVar2;
}
