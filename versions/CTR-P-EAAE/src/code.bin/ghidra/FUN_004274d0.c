/**
 * FUN_004274d0.c
 * Source line: 591145
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004274d0(int param_1)

{
  if ((1 < *(byte *)(param_1 + 0x908)) && (*(byte *)(param_1 + 0x908) == 2)) {
    FUN_004285f0(param_1 + 4,0,0);
    FUN_004285f0(param_1 + 0xe0,0,0);
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    FUN_00427a90(uRam0097d3b0,0);
    *(undefined1 *)(param_1 + 0x908) = 1;
  }
  return;
}
