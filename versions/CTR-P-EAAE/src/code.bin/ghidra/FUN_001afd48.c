/**
 * FUN_001afd48.c
 * Source line: 217965
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_001afd48(int param_1)

{
  *(undefined4 *)(param_1 + 0x12d0) = 0;
  FUN_002f88b8(*(undefined4 *)(param_1 + 0x12cc));
  if ((*(int *)(param_1 + 0xae4) != 0) && (*(int *)(*(int *)(param_1 + 0xae4) + 0xc) == 0)) {
    FUN_004b6d74(*(undefined4 *)(*(int *)(param_1 + 0x220) + 0xc));
  }
          // WARNING: Subroutine does not return
  FUN_001323b4(param_1 + 0x2c);
}
