/**
 * FUN_003572ac.c
 * Source line: 458177
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_003572ac(undefined4 *param_1,uint param_2,uint param_3)

{
  *param_1 = &UNK_008fb204;
  param_1[1] = 0;
  *(undefined1 *)((int)param_1 + 5) = 2;
  param_1[2] = param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
               param_2 >> 0x18;
  *(ushort *)((int)param_1 + 6) = (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 >> 8) & 0xff;
  return;
}
