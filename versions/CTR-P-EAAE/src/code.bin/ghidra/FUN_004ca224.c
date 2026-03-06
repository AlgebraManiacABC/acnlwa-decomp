/**
 * FUN_004ca224.c
 * Source line: 709614
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004ca224(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined1 auStack_3c [32];
  
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      FUN_004622e8(param_4,auStack_3c,param_2,param_1,0xe);
      uVar1 += 0xe;
      param_4 += 8;
    } while (uVar1 < param_3);
  }
  return;
}
