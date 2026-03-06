/**
 * FUN_002a4bfc.c
 * Source line: 345561
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002a4bfc(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  *(undefined4 *)(param_1 + 0x540) = 0;
  *(int *)(param_1 + 0x53c) = *(int *)(param_1 + 0x53c) + 1;
  uVar1 = (uint)*(byte *)(param_1 + 0x545);
  bVar2 = uVar1 == 1;
  if (bVar2) {
    uVar1 = *(uint *)(param_1 + 0x548);
  }
  if (bVar2 && uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x548) = 0x78;
  }
  return;
}
