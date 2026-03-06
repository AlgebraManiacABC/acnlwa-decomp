/**
 * FUN_004cc6a0.c
 * Source line: 711628
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_004cc6a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    piVar1 = *(int **)(param_1 + 8);
    if (*(int **)(param_1 + 8) != (int *)(param_1 + 8)) {
      do {
        piVar2 = (int *)*piVar1;
        FUN_004d3990(piVar1 + -0x6c);
        piVar1 = piVar2;
      } while (piVar2 != (int *)(param_1 + 8));
    }
    FUN_004d4458(param_1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}
