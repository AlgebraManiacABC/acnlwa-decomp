/**
 * FUN_00750f9c.c
 * Source line: 1107379
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00750f9c(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_14 [2];
  
  uVar2 = FUN_004ea048();
  iVar3 = FUN_004e958c(uVar2,(int)*(short *)(param_1 + 0x60c));
  if (iVar3 == 0) {
    uVar1 = *(ushort *)(param_1 + 0x2e);
  }
  else {
    uVar1 = *(short *)(iVar3 + 0x2e) + *(short *)(param_1 + 0x60e);
  }
  local_14[0] = (uint)uVar1;
  FUN_00691598(local_14);
  return;
}
