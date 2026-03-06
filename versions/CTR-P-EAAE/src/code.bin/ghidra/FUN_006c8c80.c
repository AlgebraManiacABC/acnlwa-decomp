/**
 * FUN_006c8c80.c
 * Source line: 1026342
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_006c8c80(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  
  uVar1 = param_1 + 0x400;
  bVar3 = *(char *)(param_1 + 0x431) == '\0';
  if (bVar3) {
    uVar1 = (uint)*(byte *)(param_1 + 0x430);
  }
  if (!bVar3 || uVar1 != 1) {
    return;
  }
  uVar2 = FUN_001323bc();
  FUN_00569e6c(uVar2,param_1 + 0x24,0);
  return;
}
