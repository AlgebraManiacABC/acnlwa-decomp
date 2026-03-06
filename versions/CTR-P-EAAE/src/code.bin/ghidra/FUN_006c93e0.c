/**
 * FUN_006c93e0.c
 * Source line: 1026652
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006c93e0(undefined4 param_1,undefined4 param_2)

{
  if (uRam009502fc < 0x14) {
    FUN_006f8114(uRam009502fc * 0x18 + 0x994ebc,param_1);
    FUN_006f7e40(uRam009502fc * 0x14 + 0x99509c,uRam009502fc * 0x18 + 0x994ebc,4,8);
    *(undefined4 *)(uRam009502fc * 0x14 + 0x9950ac) = param_2;
    FUN_006f7e90(0x994d24);
    uRam009502fc += 1;
  }
  return;
}
