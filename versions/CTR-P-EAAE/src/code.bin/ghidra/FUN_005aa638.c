/**
 * FUN_005aa638.c
 * Source line: 856991
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_005aa638(int param_1,uint param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 0x50) = param_3;
  *(ushort *)(param_1 + 0x4e) = *(ushort *)(param_1 + 0x4e) | (ushort)(1 << (param_2 & 0xff));
  return;
}
