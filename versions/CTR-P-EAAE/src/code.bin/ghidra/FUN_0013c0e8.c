/**
 * FUN_0013c0e8.c
 * Source line: 148493
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_0013c0e8(uint param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0xc) != '\x01';
  if (bVar1) {
    param_1 = (uint)*(byte *)(param_1 + 0xc);
  }
  return !bVar1 || param_1 == 2;
}
