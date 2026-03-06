/**
 * FUN_0020aedc.c
 * Source line: 267534
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0020aedc(int param_1)

{
  if (*(char *)(param_1 + 0x34) != '\0') {
    FUN_001d7b90(DAT_0094d080 + 0x754,param_1);
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  return;
}
