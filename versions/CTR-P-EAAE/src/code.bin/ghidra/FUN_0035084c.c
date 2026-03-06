/**
 * FUN_0035084c.c
 * Source line: 452398
 * Body lines: 7
 */
#include "../../../include/types.h"

uint FUN_0035084c(void)

{
  int iVar1;
  uint local_c8 [49];
  
  iVar1 = FUN_00123f94(local_c8,0xc0,0xc0000);
  if (iVar1 < 0) {
    FUN_0012f598(iVar1,0x35086c);
  }
  return (local_c8[0] & 0x10) >> 4;
}
