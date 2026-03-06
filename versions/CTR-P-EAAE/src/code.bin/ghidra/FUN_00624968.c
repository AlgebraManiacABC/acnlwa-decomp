/**
 * FUN_00624968.c
 * Source line: 938132
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00624968(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  
  if (param_2 < 4) {
    bVar1 = (byte)(1 << (param_2 & 0xff));
    if (param_3 == 0) {
      bVar1 = *(byte *)(param_1 + 4) & ~bVar1;
    }
    else {
      bVar1 |= *(byte *)(param_1 + 4);
    }
    *(byte *)(param_1 + 4) = bVar1;
  }
  return;
}
