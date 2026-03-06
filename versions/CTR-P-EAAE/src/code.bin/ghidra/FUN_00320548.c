/**
 * FUN_00320548.c
 * Source line: 423630
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_00320548(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 <= param_2) && (param_2 < uVar1 + 10)) {
    return *(undefined4 *)(param_1 + (param_2 - uVar1) * 0x2b4 + 0x684);
  }
  return 0;
}
