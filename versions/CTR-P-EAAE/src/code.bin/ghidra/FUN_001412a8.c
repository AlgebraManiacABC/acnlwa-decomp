/**
 * FUN_001412a8.c
 * Source line: 153634
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_001412a8(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((*(char *)(param_1 + 0xc) != '\0') && (**(int **)(param_1 + 4) != 0)) {
    do {
      uVar2 = 0;
      *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 4) = 0;
      uVar1 += 1;
      if (*(char *)(param_1 + 0xc) != '\0') {
        uVar2 = **(uint **)(param_1 + 4);
      }
    } while (uVar1 < uVar2);
  }
  return;
}
