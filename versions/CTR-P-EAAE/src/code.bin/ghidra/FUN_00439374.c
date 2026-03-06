/**
 * FUN_00439374.c
 * Source line: 602535
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00439374(int param_1)

{
  if (*(char **)(param_1 + 0x40) != NULL) {
    if (**(char **)(param_1 + 0x40) == '\x01') {
      FUN_004261f4();
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}
