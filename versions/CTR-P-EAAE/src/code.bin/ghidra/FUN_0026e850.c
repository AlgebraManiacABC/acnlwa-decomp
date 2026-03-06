/**
 * FUN_0026e850.c
 * Source line: 317025
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0026e850(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x8434) == '\0') {
    iVar1 = param_1 + 0x774;
  }
  else {
    iVar1 = param_1 + 0x79c;
  }
  *(int *)(param_1 + 0x7c4) = iVar1;
  FUN_004b9b64(param_1 + 0x24);
  (**(code **)(**(int **)(param_1 + 0x7c4) + 8))(0);
  *(uint *)(param_1 + 0x83c4) = *(uint *)(param_1 + 0x83c4) | 8;
  *(undefined1 *)(param_1 + 0x146) = 1;
  return;
}
