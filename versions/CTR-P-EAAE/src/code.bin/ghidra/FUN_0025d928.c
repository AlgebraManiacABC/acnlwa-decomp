/**
 * FUN_0025d928.c
 * Source line: 307794
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0025d928(int param_1)

{
  if ((*(char *)(param_1 + 0x7e15) != '\0') && (*(char *)(param_1 + 0x7430) == '\x01')) {
    FUN_0031e810(param_1 + 0x6f44);
  }
  FUN_004b9b64(param_1 + 0x294,*(undefined4 *)(param_1 + 0x4a8));
  (**(code **)(**(int **)(param_1 + 0x4a8) + 8))(0);
  *(undefined1 *)(param_1 + 0x6ceb) = 0;
  *(undefined1 *)(param_1 + 0x6e2b) = 0;
  return;
}
