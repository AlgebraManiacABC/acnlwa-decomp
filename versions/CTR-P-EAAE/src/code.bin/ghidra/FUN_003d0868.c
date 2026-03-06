/**
 * FUN_003d0868.c
 * Source line: 542363
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_003d0868(int param_1)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = (int *)(uint)*(byte *)(param_1 + 4);
  bVar2 = piVar1 != (int *)0x3;
  if (bVar2) {
    piVar1 = *(int **)(param_1 + 0x3c);
  }
  if (bVar2 && piVar1 != NULL) {
    (**(code **)(*piVar1 + 4))();
    *(undefined1 *)(param_1 + 4) = 3;
  }
  return;
}
