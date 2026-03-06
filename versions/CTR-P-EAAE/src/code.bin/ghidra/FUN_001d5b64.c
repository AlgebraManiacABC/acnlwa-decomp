/**
 * FUN_001d5b64.c
 * Source line: 239125
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_001d5b64(int param_1)

{
  if (*(int *)(param_1 + 0xdc) == 0) {
    FUN_006b1d88(DAT_0094d080,param_1 + 0xd0,0x1000269);
    *(undefined1 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 3;
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  return;
}
