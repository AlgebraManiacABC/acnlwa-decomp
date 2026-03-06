/**
 * FUN_0066f124.c
 * Source line: 978025
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0066f124(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00654124(param_1,(uint)*(byte *)(param_1 + 0x8d2) << 8,0x800,param_4,
               (uint)CONCAT21((short)((uint)param_4 >> 0x10),*(byte *)(param_1 + 0x8d2)) << 8);
  FUN_0068db1c(0,0x3f800000,0x41000000,0x40c00000,0x40c00000,param_1,0x2e,0,0,0xf);
  *(undefined2 *)(param_1 + 0x5b0) = 10;
  *(undefined2 *)(param_1 + 0x5b6) = 10;
  return;
}
