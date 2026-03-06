/**
 * FUN_00426474.c
 * Source line: 590058
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00426474(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_004264f4();
  piVar2 = *(int **)(iVar1 * 4 + 0xae59f0);
  if (piVar2[0x23] != 0) {
    (**(code **)(*piVar2 + 0x50))();
  }
  (**(code **)(**(int **)(iVar1 * 4 + 0xae59f0) + 0x10))();
  *(undefined4 *)(iVar1 * 4 + 0xae59f0) = 0;
  return;
}
