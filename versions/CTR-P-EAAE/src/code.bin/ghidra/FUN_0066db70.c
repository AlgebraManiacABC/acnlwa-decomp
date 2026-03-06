/**
 * FUN_0066db70.c
 * Source line: 977300
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0066db70(int param_1)

{
  FUN_00659750(0x3eb33333,param_1,0xffff8000,0x2800,0x80);
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x171) << 0x1a)) {
    FUN_0064f508(0x3e4ccccd,param_1,0);
    return;
  }
  if ((*(char *)(param_1 + 0x91f) != '\0') && (-1 < (int)((uint)*(byte *)(param_1 + 0x91b) << 0x19))
     ) {
    FUN_0064d0b8(param_1,0xa2,0);
    return;
  }
  return;
}
