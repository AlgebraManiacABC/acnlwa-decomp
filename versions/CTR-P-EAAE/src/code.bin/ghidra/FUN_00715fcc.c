/**
 * FUN_00715fcc.c
 * Source line: 1070161
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00715fcc(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(byte *)(param_1 + (uVar1 & 0xff) + 0xc0) < 3) {
      return 0;
    }
    uVar1 += 1;
  } while ((int)uVar1 < 0x18);
  return 1;
}
