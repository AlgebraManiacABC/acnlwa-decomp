/**
 * FUN_00549798.c
 * Source line: 790513
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00549798(int param_1)

{
  if (*(char *)(param_1 + 0x22c) != '\0') {
    FUN_004c019c(param_1);
    *(undefined1 *)(param_1 + 0x22c) = 0;
  }
  if (*(int **)(param_1 + 0x220) != NULL) {
    (**(code **)(**(int **)(param_1 + 0x220) + 0xc))();
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  if (*(int *)(param_1 + 0x224) != 0) {
    FUN_002f88b8();
    *(undefined4 *)(param_1 + 0x224) = 0;
  }
  return;
}
