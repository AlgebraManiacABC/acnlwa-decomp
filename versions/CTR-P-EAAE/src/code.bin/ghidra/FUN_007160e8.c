/**
 * FUN_007160e8.c
 * Source line: 1070265
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_007160e8(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_00715dac(param_1,uVar2 & 0xff);
    if (iVar1 != 0) {
      return uVar2 & 0xff;
    }
    uVar2 += 1;
  } while ((int)uVar2 < 0x18);
  return 0x18;
}
