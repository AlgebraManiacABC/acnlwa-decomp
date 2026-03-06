/**
 * FUN_0076c4d8.c
 * Source line: 1129728
 * Body lines: 7
 */
#include "../../../include/types.h"

uint FUN_0076c4d8(ushort *param_1)

{
  int iVar1;
  undefined4 extraout_r2;
  
  if ((((*param_1 & 0x6000) != 0x4000) && (iVar1 = FUN_00768628(param_1), iVar1 == 0)) &&
     (iVar1 = FUN_00536214(extraout_r2), iVar1 != 0)) {
    return ((uint)*(byte *)(iVar1 + 2) << 0x1a) >> 0x1f;
  }
  return 0;
}
