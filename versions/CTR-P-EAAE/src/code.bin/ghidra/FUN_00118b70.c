/**
 * FUN_00118b70.c
 * Source line: 117051
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00118b70(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (-1 < (int)((uint)*(ushort *)(iVar1 * 0x1ac + param_1 + 0x1aa) << 0x1f)) {
      return;
    }
    iVar1 += 1;
  } while (iVar1 < 0xf);
  return;
}
