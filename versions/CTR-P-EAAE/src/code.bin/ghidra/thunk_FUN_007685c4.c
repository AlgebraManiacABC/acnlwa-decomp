/**
 * thunk_FUN_007685c4.c
 * Source line: 409205
 * Body lines: 10
 */
#include "../../../include/types.h"

uint thunk_FUN_007685c4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_002fccdc();
  if (iVar1 == 10) {
    uVar2 = (*(ushort *)(param_1 + 2) & 0x400) >> 10;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
