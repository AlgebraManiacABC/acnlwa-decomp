/**
 * FUN_006a3d00.c
 * Source line: 1002358
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006a3d00(int param_1)

{
  if (*(undefined **)(param_1 + 0xc) != &UNK_006a2d88) {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_0081b430(param_1,&UNK_006a31b8,0);
    return;
  }
  return;
}
