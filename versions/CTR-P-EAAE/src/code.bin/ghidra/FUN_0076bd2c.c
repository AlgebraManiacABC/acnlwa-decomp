/**
 * FUN_0076bd2c.c
 * Source line: 1129302
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0076bd2c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007684a4();
  if (((iVar1 != 0) && ((*(ushort *)(param_1 + 2) & 0x3fff) != 0)) &&
     ((iVar1 = FUN_007684a4(param_1), iVar1 == 0 ||
      (((*(ushort *)(param_1 + 2) & 0x3fff) == 0 || (iVar1 = FUN_0076bb34(param_1), iVar1 != 8))))))
  {
    return 1;
  }
  return 0;
}
