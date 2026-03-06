/**
 * FUN_0058c9e0.c
 * Source line: 836685
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0058c9e0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uRam0094e488 = 1;
  uVar1 = FUN_0062f03c();
  if (bRam0094e489 != uVar1) {
    bRam0094e489 = (byte)uVar1;
    puVar2 = (undefined4 *)FUN_002fb378();
    uRam0098a068 = *puVar2;
    uRam0098a06c = puVar2[1];
    uRam0098a070 = puVar2[2];
    uRam0094e48a = *(undefined1 *)(bRam0094e489 + 0x84539b);
    FUN_00582e38();
    return;
  }
  return;
}
