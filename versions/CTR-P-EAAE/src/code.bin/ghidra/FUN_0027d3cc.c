/**
 * FUN_0027d3cc.c
 * Source line: 325287
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0027d3cc(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x188) == 0) {
    uVar1 = FUN_00255968(_DAT_0094f268,*(undefined1 *)(param_1 + 0x116));
    *(undefined4 *)(param_1 + 0x188) = uVar1;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x188);
  }
  return uVar1;
}
