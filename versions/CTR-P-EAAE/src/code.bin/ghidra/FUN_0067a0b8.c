/**
 * FUN_0067a0b8.c
 * Source line: 983760
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0067a0b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [16];
  
  FUN_00759a54(auStack_18,param_1 + 0x8ca);
  iVar1 = FUN_00650714(param_1,auStack_18);
  if ((iVar1 != 0) && ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0)) {
    FUN_0067c674(0x41000000,param_1,0);
  }
  uVar2 = FUN_006c6640(param_1 + 0x14,0);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}
