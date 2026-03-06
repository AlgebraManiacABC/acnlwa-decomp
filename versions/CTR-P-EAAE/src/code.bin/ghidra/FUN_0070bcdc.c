/**
 * FUN_0070bcdc.c
 * Source line: 1063525
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_0070bcdc(int param_1,uint param_2)

{
  if (param_2 == 0xf) {
    param_2 = 0xf;
  }
  else {
    param_2 = *(ushort *)((uint)*(byte *)(param_1 + param_2 + 0x58) * 2 + 0x95c010) & 0xfffffff0 |
              param_2;
  }
  return param_2;
}
