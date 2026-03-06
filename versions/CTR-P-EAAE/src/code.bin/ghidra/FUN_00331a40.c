/**
 * FUN_00331a40.c
 * Source line: 434571
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00331a40(int param_1)

{
  if (*(char *)(param_1 + 0x34) == '\0') {
    *(undefined4 *)(param_1 + 0x3c) = 9;
    FUN_002d1f40();
  }
  return;
}
