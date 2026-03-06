/**
 * FUN_004ee534.c
 * Source line: 736403
 * Body lines: 9
 */
#include "../../../include/types.h"

uint FUN_004ee534(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0056aab8(param_1 + 0x1c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0056acfc(param_1 + 0x1c);
    uVar2 ^= 1;
  }
  return uVar2;
}
