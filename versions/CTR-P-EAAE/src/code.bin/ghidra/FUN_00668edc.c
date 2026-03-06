/**
 * FUN_00668edc.c
 * Source line: 974923
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00668edc(int param_1,int param_2)

{
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0 && param_2 != 0x72) {
    FUN_006609bc(param_1);
    FUN_00651600(param_1,0xffffffff);
    return;
  }
  return;
}
