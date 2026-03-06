/**
 * thunk_FUN_006baa8c.c
 * Source line: 400427
 * Body lines: 11
 */
#include "../../../include/types.h"

void thunk_FUN_006baa8c(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  int extraout_r2;
  undefined8 uVar2;
  
  uVar2 = FUN_0076af88(param_1,param_2,param_1);
  if (((int)uVar2 != 0) && (uVar1 = *(ushort *)(extraout_r2 + 2), (uVar1 & 8) == 0)) {
    *(ushort *)(extraout_r2 + 2) =
         uVar1 & 0x3c7f |
         (ushort)((uint)((1 << ((uint)((ulonglong)uVar2 >> 0x20) & 0xff)) << 0x1d) >> 0x16) |
         uVar1 & 0xc000;
  }
  return;
}
