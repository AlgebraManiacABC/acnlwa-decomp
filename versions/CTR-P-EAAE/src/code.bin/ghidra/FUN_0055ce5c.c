/**
 * FUN_0055ce5c.c
 * Source line: 802821
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0055ce5c(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x7c) != 0 && *(int *)(param_1 + 0x7c) != 4) {
    piVar1 = *(int **)(param_1 + 0x80);
    software_interrupt(WaitSynchronization1);
    if (*piVar1 < 0) {
      FUN_0012f204();
    }
    *(undefined1 *)(piVar1 + 1) = 1;
    *(undefined4 *)(param_1 + 0x7c) = 4;
  }
  return;
}
