/**
 * FUN_0076ef60.c
 * Source line: 1132157
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_0076ef60(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_3 + param_2 * 6;
  if ((uVar1 & 1) != 0) {
    param_4 += 4;
  }
  return ((uint)*(byte *)(param_1 + (uVar1 >> 1) + 0x25f84) & 1 << (param_4 & 0xff)) == 0;
}
