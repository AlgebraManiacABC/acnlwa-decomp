/**
 * FUN_005cdfe8.c
 * Source line: 880338
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_005cdfe8(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 < 0xff) {
    uVar1 = *(undefined4 *)(param_2 * 8 + 0x95c730);
    uVar2 = *(undefined4 *)(param_2 * 8 + 0x95c734);
  }
  else {
    uVar1 = 0xffffffff;
    uVar2 = 0xffffffff;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}
