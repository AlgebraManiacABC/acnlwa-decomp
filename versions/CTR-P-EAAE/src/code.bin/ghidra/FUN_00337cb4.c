/**
 * FUN_00337cb4.c
 * Source line: 437110
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00337cb4(int param_1)

{
  DAT_0094ed72 &= ~(byte)(1 << (*(uint *)(param_1 + 0x8aa8) & 0xff));
  FUN_002161a4(_DAT_0094ed74);
  FUN_002d546c(param_1 + *(int *)(param_1 + 0x8aac) * 0x250 + 0x458,0);
  FUN_0081a7b8(param_1 + 0x28,FUN_00337d30,0);
  return;
}
