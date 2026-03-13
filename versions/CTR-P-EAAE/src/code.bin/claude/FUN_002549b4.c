/**
 * FUN_002549b4.c
 * Source line: 304865
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_002549b4(int param_1,uint *param_2,uint *param_3,uint param_4)

{
  if ((param_4 < 0xf) && (param_1 += param_4 * 0xf0, *(char *)(param_1 + 0x3fa) != '\0')) {
    *param_2 = (uint)*(byte *)(param_1 + 0x3fb);
    *param_3 = (uint)*(byte *)(param_1 + 0x3fc);
    return 1;
  }
  return 0;
}
