/**
 * FUN_00752bd0.c
 * Source line: 1109027
 * Body lines: 1
 */
#include "../../../include/types.h"

ushort FUN_00752bd0(int param_1,uint param_2,uint param_3,uint param_4)

{
  return *(ushort *)(param_1 + (param_4 & 1) * 0x20 + (param_3 & 0xf) * 2) >> (param_2 & 0xf) & 1;
}
