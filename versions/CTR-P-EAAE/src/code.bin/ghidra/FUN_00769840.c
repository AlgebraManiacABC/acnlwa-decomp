/**
 * FUN_00769840.c
 * Source line: 1127144
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_00769840(ushort *param_1)

{
  int iVar1;
  
  if (((*param_1 & 0x6000) != 0x4000) &&
     ((iVar1 = FUN_00536214(), iVar1 == 0 || (-1 < (int)((uint)*(byte *)(iVar1 + 1) << 0x1b))))) {
    return 0;
  }
  return 1;
}
