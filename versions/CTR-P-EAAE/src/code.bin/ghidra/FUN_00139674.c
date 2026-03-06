/**
 * FUN_00139674.c
 * Source line: 146196
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_00139674(uint param_1)

{
  uint *puVar1;
  
  if (iRam00975284 == 0) {
    puVar1 = (uint *)0x975280;
  }
  else {
    puVar1 = (uint *)(iRam00975284 + 0xc4);
  }
  return (*puVar1 & 1 << (param_1 & 0xff)) != 0;
}
