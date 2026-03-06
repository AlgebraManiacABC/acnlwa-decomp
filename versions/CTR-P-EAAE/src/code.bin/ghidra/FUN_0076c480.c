/**
 * FUN_0076c480.c
 * Source line: 1129705
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_0076c480(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_007684a4();
  if (((iVar1 == 0) || ((*(ushort *)(param_1 + 2) & 0x3fff) == 0)) ||
     (iVar1 = FUN_0076bb34(param_1), iVar1 != 8)) {
    iVar1 = FUN_00536214(param_1);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = ((uint)*(byte *)(iVar1 + 1) << 0x19) >> 0x1f;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
