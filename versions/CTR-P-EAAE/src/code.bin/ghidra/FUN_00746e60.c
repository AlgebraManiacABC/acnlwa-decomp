/**
 * FUN_00746e60.c
 * Source line: 1102880
 * Body lines: 4
 */
#include "../../../include/types.h"

undefined4 FUN_00746e60(int param_1)

{
  if (*(int *)(param_1 + 0xb8) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0xb8) + 300);
  }
  return 0;
}
