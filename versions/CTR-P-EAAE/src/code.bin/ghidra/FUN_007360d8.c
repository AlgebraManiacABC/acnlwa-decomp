/**
 * FUN_007360d8.c
 * Source line: 1091343
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_007360d8(uint param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x20) == '\x05';
  if (bVar1) {
    param_1 = (uint)*(byte *)(param_1 + 0x52);
  }
  return bVar1 && param_1 == 0;
}
