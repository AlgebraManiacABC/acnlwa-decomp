/**
 * FUN_006e58cc.c
 * Source line: 1043423
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006e58cc(int param_1)

{
  if (*(undefined **)(param_1 + 0xc) != &UNK_006e59a4) {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_0081bc80(param_1,&UNK_006e5b14,0);
    return;
  }
  return;
}
