/**
 * FUN_00350778.c
 * Source line: 452340
 * Body lines: 7
 */
#include "../../../include/types.h"

uint FUN_00350778(void)

{
  int iVar1;
  uint local_c8 [49];
  
  iVar1 = FUN_00123f94(local_c8,0xc0,0xc0000);
  if (iVar1 < 0) {
    FUN_0012f598(iVar1,0x350798);
  }
  return (local_c8[0] & 0x40) >> 6;
}
