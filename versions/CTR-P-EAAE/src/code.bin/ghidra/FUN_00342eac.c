/**
 * FUN_00342eac.c
 * Source line: 440606
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00342eac(int param_1)

{
  if ((*(char *)(param_1 + 0x10) == '\x01' || *(char *)(param_1 + 0x10) == '\x02') &&
     (*(int *)(param_1 + 8) == 0)) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}
