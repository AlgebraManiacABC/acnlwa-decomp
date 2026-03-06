/**
 * FUN_0012ebf4.c
 * Source line: 135412
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0012ebf4(int param_1,int param_2)

{
  if (iRam0094cd20 != 0) {
    if (param_2 == 0) {
      if (*(int *)(param_1 + 0x14) == -1) {
        return;
      }
      FUN_00135010(iRam0094cd20,*(int *)(param_1 + 0x14),1);
    }
    else {
      FUN_0013d4f0(iRam0094cd20,0,1);
    }
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  }
  return;
}
