/**
 * FUN_0041cc68.c
 * Source line: 585464
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0041cc68(int param_1)

{
  if (*(int *)(param_1 + 0xc) - 0x100000U < 0x3ff00000) {
    FUN_0041bb9c();
    (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc),0);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  return;
}
