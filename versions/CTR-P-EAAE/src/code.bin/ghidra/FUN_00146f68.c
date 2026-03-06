/**
 * FUN_00146f68.c
 * Source line: 159796
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00146f68(int param_1)

{
  *(undefined4 *)(param_1 + 0x5c) = 0xffffff9c;
  *(undefined4 *)(param_1 + 0x60) = 5000;
  *(undefined4 *)(param_1 + 100) = 500;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0x80) + 4);
  return;
}
