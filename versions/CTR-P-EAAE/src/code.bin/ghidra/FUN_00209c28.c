/**
 * FUN_00209c28.c
 * Source line: 266683
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00209c28(int param_1)

{
  if (*(char *)(param_1 + 199) != '\0') {
    FUN_00817054(param_1 + 0xdc,FUN_00208714,0);
    return;
  }
  if (*(undefined **)(param_1 + 0xe8) == &UNK_00208ea8) {
    if (*(int *)(param_1 + 0xec) == 0) {
      FUN_00817054(param_1 + 0xdc,FUN_00208714,0);
      return;
    }
    return;
  }
  return;
}
