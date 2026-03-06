/**
 * FUN_0053bc30.c
 * Source line: 781355
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_0053bc30(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 != 0 && iVar1 != 4) {
    piVar2 = *(int **)(param_1 + 0x78);
    software_interrupt(WaitSynchronization1);
    if (*piVar2 < 0) {
      FUN_0012f204();
    }
    *(undefined1 *)(piVar2 + 1) = 1;
    *(undefined4 *)(param_1 + 0x74) = 4;
    iVar1 = *(int *)(param_1 + 0x74);
  }
  return iVar1;
}
