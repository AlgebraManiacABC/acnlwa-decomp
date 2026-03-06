/**
 * FUN_00727dc8.c
 * Source line: 1081251
 * Body lines: 9
 */
#include "../../../include/types.h"

uint * FUN_00727dc8(byte *param_1,uint *param_2)

{
  *param_2 = (uint)param_1[4] | (uint)param_1[5] << 4 | (uint)param_1[6] << 8 |
             (uint)param_1[0xd] << 0x10 | (uint)param_1[0xe] << 0x14 | (uint)param_1[0xf] << 0x18;
  param_2[1] = *(ushort *)(param_1 + 0x16) | 0x804f0000;
  param_2[2] = (uint)param_1[1] | (uint)param_1[2] << 4 | (uint)param_1[3] << 8 |
               (uint)param_1[10] << 0xc | (uint)param_1[0xb] << 0x10 | (uint)param_1[0xc] << 0x14;
  param_2[3] = (uint)*param_1 | (uint)param_1[9] << 0x10;
  param_2[4] = *(uint *)(param_1 + 0x12) & 0xffffff | (uint)param_1[0x15] << 0x18;
  param_2[5] = (uint)param_1[7] | (uint)param_1[0x10] << 0x10;
  return param_2 + 6;
}
