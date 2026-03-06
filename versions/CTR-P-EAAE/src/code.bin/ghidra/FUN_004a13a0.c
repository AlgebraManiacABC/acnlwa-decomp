/**
 * FUN_004a13a0.c
 * Source line: 677177
 * Body lines: 7
 */
#include "../../../include/types.h"

uint FUN_004a13a0(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0049c808();
  if ((uVar1 & 0x80000000) == 0) {
    FUN_004a118c(param_1,param_2,*(undefined4 *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 8) = param_2;
  }
  return uVar1;
}
