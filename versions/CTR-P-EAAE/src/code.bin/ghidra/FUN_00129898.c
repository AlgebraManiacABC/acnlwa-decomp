/**
 * FUN_00129898.c
 * Source line: 130886
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00129898(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (((cRam00974f31 == '\0') && ((param_2 & 0xfff) == 0)) && ((param_1 & 0xfff) == 0)) {
    FUN_0012f170(0xae0f18,param_1,param_2,3,3);
    uVar1 = FUN_0012f9ac(uRam00ae0f2c,param_2);
    iRam00974f34 = param_2 - 4;
    if ((uVar1 & 0x80000000) == 0) {
      cRam00974f31 = '\x01';
    }
  }
  return;
}
