/**
 * FUN_001cde2c.c
 * Source line: 234637
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_001cde2c(int param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = 0x8000;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(ushort *)(param_1 + 0xc) = uVar1 | *(ushort *)(param_1 + 0xc) & 0x7fff;
  return;
}
