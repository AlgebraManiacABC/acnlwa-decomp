/**
 * FUN_00532c78.c
 * Source line: 775695
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00532c78(int param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 0x284) != 0) {
    fVar1 = (float)FUN_007460b8(param_1 + 0x27c);
    fVar2 = (float)FUN_007461b4(param_1 + 0x27c);
    if (fVar1 * 0.5 < fVar2) {
      FUN_004ee9a8(0,param_1 + 0x27c);
      return 1;
    }
  }
  return 0;
}
