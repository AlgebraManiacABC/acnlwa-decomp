/**
 * FUN_005aead8.c
 * Source line: 860060
 * Body lines: 12
 */
#include "../../../include/types.h"

uint FUN_005aead8(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((int)param_1 < 0) {
    uVar1 = (param_1 & 0x3fc00) >> 10;
    uVar2 = param_1 & 0x3ff;
    if (((((uVar1 != 0x11) || (uVar2 < 100)) || (0xb3 < uVar2)) &&
        (((uVar1 != 0x11 || (uVar2 < 0xb4)) || (199 < uVar2)))) &&
       ((((uVar1 != 0x11 || (uVar2 < 200)) || (0xdb < uVar2)) && ((int)param_1 < 0)))) {
      FUN_0012f598(param_1,0x5aeb4c);
    }
  }
  return param_1;
}
