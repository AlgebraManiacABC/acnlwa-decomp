/**
 * FUN_006f5ed4.c
 * Source line: 1051922
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_006f5ed4(int param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  FUN_006ce2ec(param_1 + 0x4c);
  if ((*(code **)(param_1 + 0xb84) != (code *)&UNK_006f56b4) || (*(int *)(param_1 + 0xb88) != 0)) {
    if (*(code **)(param_1 + 0xb84) != FUN_006f58a0) {
      return;
    }
    if (*(int *)(param_1 + 0xb88) != 0) {
      return;
    }
  }
  FUN_0081bd88(param_1 + 0xb78,FUN_006f57bc,0,&UNK_00890218,unaff_r4,unaff_lr);
  return;
}
