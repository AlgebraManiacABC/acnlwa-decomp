/**
 * FUN_001540ec.c
 * Source line: 168036
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_001540ec(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_003492d8(param_1 + 0x138);
  *(uint *)(param_1 + 0x14) = uVar1;
  if ((uVar1 & 0x80000000) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0xb;
    *(undefined4 *)(param_1 + 8) = 0xffffff80;
  }
  return *(undefined4 *)(param_1 + 4);
}
