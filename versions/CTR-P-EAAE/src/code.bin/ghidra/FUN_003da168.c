/**
 * FUN_003da168.c
 * Source line: 550748
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_003da168(void)

{
  uint in_r3;
  uint local_8;
  
  if (iRam00974f3c == 0) {
    return 0;
  }
  local_8 = in_r3;
  FUN_003da0d8(0x974f40,&local_8);
  return local_8 & 0xff;
}
