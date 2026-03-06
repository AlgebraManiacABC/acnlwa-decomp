/**
 * FUN_0075d718.c
 * Source line: 1117885
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0075d718(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = 0;
  *(uint *)(param_2 + 8) = ((uint)*(ushort *)(param_1 + 2) << 0x1b) >> 0x18;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xfffffff0;
  *(uint *)(param_2 + 0x18) = (*(ushort *)(param_1 + 2) & 0x3e0) >> 2;
  *(undefined4 *)(param_2 + 0x24) = 0xfffffff0;
  *(undefined4 *)(param_2 + 0x1c) = 0xfffffff0;
  *(uint *)(param_2 + 0x28) = (*(ushort *)(param_1 + 2) & 0x7c00) >> 7;
  *(undefined4 *)(param_2 + 0x2c) = 0x10;
  return;
}
