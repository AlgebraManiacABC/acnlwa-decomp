/**
 * FUN_006a923c.c
 * Source line: 1005244
 * Body lines: 8
 */
#include "../../../include/types.h"

byte FUN_006a923c(int param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = 0;
  if ((*(int *)(param_1 + 0x254) != 0) &&
     (bVar1 = *(byte *)(*(int *)(param_1 + 0x254) + 0xb7), bVar2 = bVar1 & 1, (bVar1 & 1) != 0)) {
    bVar2 = 1;
  }
  return bVar2;
}
