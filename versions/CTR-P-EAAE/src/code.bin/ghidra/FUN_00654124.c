/**
 * FUN_00654124.c
 * Source line: 964052
 * Body lines: 11
 */
#include "../../../include/types.h"

bool FUN_00654124(int param_1,undefined2 param_2,undefined2 param_3)

{
  byte bVar1;
  bool bVar2;
  
  *(undefined2 *)(param_1 + 0x95c) = param_2;
  *(undefined2 *)(param_1 + 0x95e) = param_3;
  bVar1 = *(byte *)(param_1 + 0x17a);
  *(byte *)(param_1 + 0x17a) = bVar1 | 0x10;
  bVar2 = *(short *)(param_1 + 0x95c) == *(short *)(param_1 + 0x2e);
  if (bVar2) {
    *(byte *)(param_1 + 0x17a) = bVar1 & 0xef;
  }
  return bVar2;
}
