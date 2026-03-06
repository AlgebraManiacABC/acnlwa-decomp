/**
 * thunk_FUN_0069471c.c
 * Source line: 410736
 * Body lines: 13
 */
#include "../../../include/types.h"

void thunk_FUN_0069471c(void)

{
  int iVar1;
  undefined4 uVar2;
  float afStack_14 [4];
  
  if (((uRam0094f364 & 1) == 0) && (iVar1 = FUN_002fe7dc(0x94f364), iVar1 != 0)) {
    uRam0094f36e = 0;
    uRam0094f370 = 0;
    uRam0094f372 = 0;
  }
  FUN_0023ffb8(afStack_14,0x8c);
  afStack_14[0] = afStack_14[0] - 24.0;
  uVar2 = FUN_00308340();
  FUN_005b5b78(uVar2,1,afStack_14,0x94f36e,0,0,0,1,1);
  return;
}
