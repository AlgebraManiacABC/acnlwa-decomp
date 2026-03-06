/**
 * FUN_00716128.c
 * Source line: 1070284
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00716128(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_00715dac(param_1,uVar2 & 0xff);
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 += 1;
  } while ((int)uVar2 < 0x18);
  return 0;
}
