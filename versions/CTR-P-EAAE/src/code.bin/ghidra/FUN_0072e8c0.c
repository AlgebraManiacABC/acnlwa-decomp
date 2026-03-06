/**
 * FUN_0072e8c0.c
 * Source line: 1085788
 * Body lines: 3
 */
#include "../../../include/types.h"

bool FUN_0072e8c0(int param_1)

{
  return *(char *)(param_1 + 0x491) != '\0' ||
         ((*(char *)(param_1 + 0x478) != '\0' || *(char *)(param_1 + 0x480) != '\0') ||
         (*(char *)(param_1 + 0x488) != '\0' || *(char *)(param_1 + 0x490) != '\0'));
}
