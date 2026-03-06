/**
 * FUN_00572cf8.c
 * Source line: 817872
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00572cf8(undefined4 param_1,float param_2,int param_3,undefined4 param_4,uint param_5)

{
  float fVar1;
  
  if (param_5 < 2) {
    FUN_004ef9a4(param_3 + 0x2c8);
    FUN_004ee904(param_3 + 0x2c8,param_5);
    FUN_004ee9a8(param_1,param_3 + 0x2c8);
    fVar1 = (float)FUN_007460b8(param_3 + 0x2c8);
    if (param_2 < fVar1) {
      fVar1 = param_2;
    }
    FUN_004ee9cc(fVar1,param_3 + 0x2c8);
  }
  *(undefined1 *)(param_3 + 0x30e) = 1;
  return;
}
