/**
 * FUN_0028da44.c
 * Source line: 333321
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0028da44(int param_1)

{
  if (((*(char *)(param_1 + 0x13f) == '\0') && (DAT_00950708 == '\x04')) && (DAT_0095070d == '\0'))
  {
    *(undefined1 *)(param_1 + 0x13f) = 1;
  }
  FUN_0028d570(param_1);
  FUN_0028d3fc(param_1);
  if (*(char *)(param_1 + 0x13f) != '\0') {
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  }
  return 2;
}
