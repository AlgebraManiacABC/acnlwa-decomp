/**
 * FUN_00419af4.c
 * Source line: 583834
 * Body lines: 9
 */
#include "../../../include/types.h"

uint FUN_00419af4(int param_1)

{
  char cVar1;
  uint unaff_r5;
  
  cVar1 = **(char **)(param_1 + 0x44);
  if ((cVar1 != '\x02' && cVar1 != '\x03') && cVar1 != '\x04') {
    return 5;
  }
  FUN_00426224(*(undefined4 *)(param_1 + 0x40),0xd0a14867);
  *(undefined4 *)(param_1 + 0x40) = 0;
  return unaff_r5 & 0xff00 | 1;
}
