/**
 * FUN_00765664.c
 * Source line: 1123920
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00765664(int param_1)

{
  int iVar1;
  
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    iVar1 = FUN_003170f8(7,0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_0076263c(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 2;
}
