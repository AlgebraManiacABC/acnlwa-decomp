/**
 * FUN_00585228.c
 * Source line: 831571
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00585228(int param_1)

{
  if (*(int **)(param_1 + 8) != NULL) {
    (**(code **)(**(int **)(param_1 + 8) + 0x18))();
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0x39;
  }
  *(undefined2 *)(param_1 + 0xe) = 0;
  return;
}
