/**
 * FUN_004df5f8.c
 * Source line: 724420
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_004df5f8(int param_1)

{
  undefined1 auStack_18 [16];
  
  if (*(int *)(param_1 + 0x88) != 0) {
    if (*(char *)(param_1 + 0x86) != '\x01') {
      FUN_001329c4(auStack_18,*(undefined4 *)(iRam009514d4 + 4),0);
      FUN_001527e4(*(undefined4 *)(param_1 + 0x88));
      FUN_00132a3c(auStack_18);
    }
    (**(code **)(**(int **)(param_1 + 0x24) + 0xc))
              (*(int **)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x88));
    (**(code **)(**(int **)(param_1 + 0x24) + 0xc))
              (*(int **)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x8c));
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  return;
}
