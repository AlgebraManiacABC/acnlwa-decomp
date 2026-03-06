/**
 * FUN_00300f9c.c
 * Source line: 398722
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_00300f9c(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 < 0xf) && (iVar1 = FUN_002ff8b0(4), iVar1 < 4)) {
    return (1 << (param_2 & 0xf) & 0xffffU &
           (uint)*(ushort *)(param_1 + iVar1 * 2 + (param_2 >> 4) * 2 + 0x7ec)) != 0;
  }
  return false;
}
