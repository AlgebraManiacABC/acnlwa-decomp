/**
 * FUN_0075d630.c
 * Source line: 1117851
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0075d630(ushort *param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = 0;
  *(uint *)(param_2 + 8) = ((uint)*param_1 << 0x1b) >> 0x18;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0x10;
  *(uint *)(param_2 + 0x18) = (*param_1 & 0x3e0) >> 2;
  *(undefined4 *)(param_2 + 0x1c) = 0xfffffff0;
  *(undefined4 *)(param_2 + 0x24) = 0xfffffff0;
  *(uint *)(param_2 + 0x28) = (*param_1 & 0x7c00) >> 7;
  *(undefined4 *)(param_2 + 0x2c) = 0xfffffff0;
  return;
}
