/**
 * FUN_00756ac0.c
 * Source line: 1112216
 * Body lines: 8
 */
#include "../../../include/types.h"

byte FUN_00756ac0(int param_1,uint param_2)

{
  byte bVar1;
  
  if (param_2 < 3) {
    bVar1 = *(byte *)(param_1 + 0x5b) >> (param_2 & 0xff) & 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}
