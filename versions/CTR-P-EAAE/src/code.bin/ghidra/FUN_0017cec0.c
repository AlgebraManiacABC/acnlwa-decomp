/**
 * FUN_0017cec0.c
 * Source line: 195691
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0017cec0(void)

{
  int iVar1;
  uint uVar2;
  
  FUN_0017ff90();
  uVar2 = 0x1a;
  do {
    iVar1 = FUN_00317148(*(undefined4 *)((uVar2 & 0xff) * 4 + 0x9b4a24),0);
    if (iVar1 != 0) {
      FUN_006f9db4(uVar2 & 0xff);
      FUN_002fae84();
      return;
    }
    uVar2 += 1;
  } while ((int)uVar2 < 0x1e);
  return;
}
