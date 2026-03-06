/**
 * FUN_006e4d30.c
 * Source line: 1042781
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_006e4d30(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 < 0x276) {
    iVar2 = FUN_006e5718(param_1);
    uVar1 = ((uint)*(byte *)(iVar2 + 0x10) << 0x1c) >> 0x1f;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
