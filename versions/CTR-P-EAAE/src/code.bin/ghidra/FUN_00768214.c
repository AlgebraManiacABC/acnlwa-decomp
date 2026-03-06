/**
 * FUN_00768214.c
 * Source line: 1125819
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_00768214(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*param_1 & 0x6000) != 0x4000) {
    iVar1 = FUN_00536214(param_1);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = ((uint)*(byte *)(iVar1 + 1) << 0x1e) >> 0x1f;
    }
    return uVar2;
  }
  return 1;
}
