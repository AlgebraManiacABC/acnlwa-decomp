/**
 * FUN_0032049c.c
 * Source line: 423590
 * Body lines: 6
 */
#include "../../../include/types.h"

int FUN_0032049c(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 <= param_2) && (param_2 < uVar1 + 10)) {
    return param_1 + (param_2 - uVar1) * 0x2b4 + 0x3d4;
  }
  return param_1 + 0x3d4;
}
