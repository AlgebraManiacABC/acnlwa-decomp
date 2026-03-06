/**
 * FUN_006547e4.c
 * Source line: 964362
 * Body lines: 5
 */
#include "../../../include/types.h"

bool FUN_006547e4(int param_1,int param_2)

{
  FUN_0056af2c(param_1 + 0x2e);
  *(byte *)(param_1 + 0x17a) = *(byte *)(param_1 + 0x17a) & 0xef;
  *(undefined2 *)(param_1 + 0x95c) = *(undefined2 *)(param_1 + 0x2e);
  *(undefined2 *)(param_1 + 0x95e) = 0;
  return *(short *)(param_1 + 0x2e) == param_2;
}
