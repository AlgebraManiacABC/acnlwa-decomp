/**
 * FUN_006540d8.c
 * Source line: 964033
 * Body lines: 11
 */
#include "../../../include/types.h"

bool FUN_006540d8(int param_1,undefined2 param_2,undefined2 param_3)

{
  byte bVar1;
  bool bVar2;
  
  *(undefined2 *)(param_1 + 0x958) = param_2;
  *(undefined2 *)(param_1 + 0x95a) = param_3;
  bVar1 = *(byte *)(param_1 + 0x17a);
  *(byte *)(param_1 + 0x17a) = bVar1 | 8;
  bVar2 = *(short *)(param_1 + 0x958) == *(short *)(param_1 + 0x2c);
  if (bVar2) {
    *(byte *)(param_1 + 0x17a) = bVar1 & 0xf7;
  }
  return bVar2;
}
