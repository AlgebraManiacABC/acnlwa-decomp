/**
 * FUN_006a3ce0.c
 * Source line: 1002337
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_006a3ce0(int param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  FUN_006f5e80(param_1 + 0x50);
  if (*(undefined **)(param_1 + 0x191c) != &UNK_006a2d88) {
    return;
  }
  if (*(int *)(param_1 + 0x1920) == 0) {
    FUN_0081b430(param_1 + 0x1910,&UNK_006a31b8,0,&UNK_00857b40,unaff_r4,unaff_lr);
    return;
  }
  return;
}
