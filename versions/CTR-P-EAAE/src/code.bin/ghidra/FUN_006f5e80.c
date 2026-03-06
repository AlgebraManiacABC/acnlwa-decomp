/**
 * FUN_006f5e80.c
 * Source line: 1051904
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006f5e80(int param_1)

{
  if (*(undefined **)(param_1 + 0xc) != &UNK_006f56b4) {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_0081bd88(param_1,FUN_006f56ec,0);
    return;
  }
  return;
}
