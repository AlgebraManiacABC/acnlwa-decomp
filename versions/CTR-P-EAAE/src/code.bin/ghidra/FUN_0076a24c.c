/**
 * FUN_0076a24c.c
 * Source line: 1127725
 * Body lines: 6
 */
#include "../../../include/types.h"

ushort FUN_0076a24c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_002fccdc();
  if ((iVar1 == 10) && ((*(ushort *)(param_1 + 2) & 0x400) != 0)) {
    return *(ushort *)(param_1 + 2) & 7;
  }
  return 0;
}
