/**
 * FUN_006607b0.c
 * Source line: 970496
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_006607b0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x44) & 1) == 0)) {
    *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) | 1;
    FUN_00582e4c(0x10005e6,param_2,param_3,0);
  }
  if (param_4 != 0) {
    FUN_00659674(param_2,1);
    return;
  }
  return;
}
