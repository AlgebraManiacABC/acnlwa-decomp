/**
 * FUN_006f5e60.c
 * Source line: 1051883
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_006f5e60(int param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  FUN_006ce298(param_1 + 0x4c);
  if (*(undefined **)(param_1 + 0xb84) != &UNK_006f56b4) {
    return;
  }
  if (*(int *)(param_1 + 0xb88) == 0) {
    FUN_0081bd88(param_1 + 0xb78,FUN_006f56ec,0,&UNK_00890210,unaff_r4,unaff_lr);
    return;
  }
  return;
}
