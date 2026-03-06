/**
 * FUN_007360f4.c
 * Source line: 1091357
 * Body lines: 9
 */
#include "../../../include/types.h"

uint FUN_007360f4(uint param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x20) == '\x05';
  if (bVar1) {
    param_1 = (uint)*(byte *)(param_1 + 0x52);
  }
  if (!bVar1 || param_1 != 1) {
    param_1 = 0;
  }
  return param_1;
}
