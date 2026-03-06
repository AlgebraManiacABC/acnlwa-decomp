/**
 * FUN_006ea210.c
 * Source line: 1045492
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_006ea210(int param_1)

{
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x4b8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x4bc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x4c0);
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(*(int *)(param_1 + 0x28) + 0x2e);
  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_1 + 0x4ce);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x4ac);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x4b0);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x4b4);
  FUN_006ea9dc(param_1);
  *(undefined1 *)(param_1 + 0x4dc) = 0;
  return 1;
}
