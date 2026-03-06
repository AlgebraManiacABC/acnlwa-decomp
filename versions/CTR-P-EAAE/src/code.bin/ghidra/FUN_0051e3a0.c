/**
 * FUN_0051e3a0.c
 * Source line: 763064
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0051e3a0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00305f44();
  if (uVar1 == (*(uint *)(param_1 + 0x20) << 0xc) >> 0x1d) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfff1ffff | 0x80000;
  }
  return;
}
