/**
 * FUN_00746f24.c
 * Source line: 1103018
 * Body lines: 4
 */
#include "../../../include/types.h"

undefined8 FUN_00746f24(int param_1)

{
  if (*(int *)(param_1 + 0xb8) != 0) {
    return *(undefined8 *)(*(int *)(param_1 + 0xb8) + 0xd0);
  }
  return 0;
}
