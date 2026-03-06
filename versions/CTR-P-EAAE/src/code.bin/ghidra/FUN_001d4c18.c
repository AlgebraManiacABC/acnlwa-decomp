/**
 * FUN_001d4c18.c
 * Source line: 238457
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_001d4c18(int param_1)

{
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined2 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x74) = _DAT_00ae5658;
  *(undefined4 *)(param_1 + 0x78) = _DAT_00ae565c;
  *(undefined4 *)(param_1 + 0x7c) = _DAT_00ae5660;
  *(undefined2 *)(param_1 + 0x90) = 600;
  thunk_FUN_008b1b88(*(undefined4 *)(param_1 + 0x68),1);
  *(undefined1 *)(*(int *)(param_1 + 0x68) + 0x2f8c) = 0;
  FUN_0058d3b4(0,0x1000681);
  return;
}
