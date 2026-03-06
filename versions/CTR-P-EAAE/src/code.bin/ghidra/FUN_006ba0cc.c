/**
 * FUN_006ba0cc.c
 * Source line: 1016776
 * Body lines: 7
 */
#include "../../../include/types.h"

bool FUN_006ba0cc(int param_1,short param_2,short param_3)

{
  int iVar1;
  
  iVar1 = FUN_007684a4();
  if (iVar1 != 0) {
    *(ushort *)(param_1 + 2) =
         param_3 + param_2 * 0x400 & 0x3fffU | *(ushort *)(param_1 + 2) & 0xc000;
  }
  return iVar1 != 0;
}
