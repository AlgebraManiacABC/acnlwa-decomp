/**
 * FUN_001cdd68.c
 * Source line: 234573
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_001cdd68(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00305f44();
  if (iVar1 != 0) {
    *(uint *)(param_1 + 8) =
         *(uint *)(param_1 + 8) & ~(0x7f << (iVar1 * 8 - 8U & 0xff)) |
         (param_2 & 0x7f) << (iVar1 * 8 - 8U & 0xff);
    return;
  }
  *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0x8000 | (ushort)param_2 & 0x7fff;
  return;
}
