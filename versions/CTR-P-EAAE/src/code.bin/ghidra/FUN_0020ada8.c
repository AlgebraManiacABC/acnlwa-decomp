/**
 * FUN_0020ada8.c
 * Source line: 267422
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0020ada8(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 + 0xfefff986;
  if ((uVar1 < 2) || (uVar1 == 2 || uVar1 == 3)) {
    if ((*(int *)(DAT_0094d080 + 0xcf8) == 0) ||
       (0x42200000 < *(int *)(*(int *)(DAT_0094d080 + 0xcf8) + 4))) {
      *(undefined1 *)(param_1 + 0x39) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x39) = 0;
    }
  }
  return;
}
