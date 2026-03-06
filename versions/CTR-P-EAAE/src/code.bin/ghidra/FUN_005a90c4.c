/**
 * FUN_005a90c4.c
 * Source line: 855996
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_005a90c4(int param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(*(int *)(param_1 + 0xc) + 0x14);
  if (param_2 == 0) {
    uVar1 &= 0xffef;
  }
  else {
    uVar1 |= 0x10;
  }
  *(ushort *)(*(int *)(param_1 + 0xc) + 0x14) = uVar1;
  return;
}
