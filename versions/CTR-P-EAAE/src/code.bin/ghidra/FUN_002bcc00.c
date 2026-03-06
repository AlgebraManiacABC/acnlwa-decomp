/**
 * FUN_002bcc00.c
 * Source line: 358149
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_002bcc00(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x14) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_001b0504(param_1,param_2);
    if (*(float **)(param_2 + 0x18) == NULL) {
      FUN_004bf4bc(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 0x14));
    }
    else {
      FUN_004bf4bc(*(float *)(param_2 + 4) * **(float **)(param_2 + 0x18),
                   *(undefined4 *)(param_2 + 0x14));
    }
  }
  return uVar1;
}
