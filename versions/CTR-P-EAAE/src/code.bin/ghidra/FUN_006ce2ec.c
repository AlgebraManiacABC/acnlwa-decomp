/**
 * FUN_006ce2ec.c
 * Source line: 1029614
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006ce2ec(int param_1)

{
  if (*(undefined **)(param_1 + 0xc) != &UNK_006cd33c) {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_0081b858(param_1,&UNK_006cd6d4,0);
    return;
  }
  return;
}
