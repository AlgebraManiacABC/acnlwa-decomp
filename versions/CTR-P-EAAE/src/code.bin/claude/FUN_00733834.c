/**
 * FUN_00733834.c
 * Source line: 1089170
 * Body lines: 4
 */
#include "../../../include/types.h"

undefined4 FUN_00733834(int param_1)

{
  if ((*(int *)(param_1 + 100) != 0) && (*(char *)(param_1 + 0x71) == '\x04')) {
    return *(undefined4 *)(param_1 + (uint)(*(char *)(param_1 + 0xb5) == '\0') * 4 + 0xc4);
  }
  return 0;
}
