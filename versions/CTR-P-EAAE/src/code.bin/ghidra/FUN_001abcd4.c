/**
 * FUN_001abcd4.c
 * Source line: 215730
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_001abcd4(int param_1)

{
  *(undefined2 *)(param_1 + 0x68) = 0x276;
  *(undefined2 *)(param_1 + 0x70) = 0x276;
  *(undefined2 *)(param_1 + 0x6a) = 0x276;
  *(undefined2 *)(param_1 + 0x72) = 0x276;
  *(undefined2 *)(param_1 + 0x6c) = 0x276;
  *(undefined2 *)(param_1 + 0x74) = 0x276;
  *(undefined2 *)(param_1 + 0x6e) = 0x276;
  *(undefined2 *)(param_1 + 0x76) = 0x276;
  if (*(int *)(param_1 + 0x7c) == 0) {
    FUN_004ef3a4(param_1 + 0xcc);
    return 1;
  }
          // WARNING: Subroutine does not return
  FUN_004f1270(param_1 + 0x78);
}
