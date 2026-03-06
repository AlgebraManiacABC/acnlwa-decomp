/**
 * FUN_005221d8.c
 * Source line: 765430
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_005221d8(int param_1,int param_2)

{
  uint uVar1;
  
  if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 4) + -1)) {
    if (*(int *)(param_1 + 0x10) <= param_2) {
      FUN_005224e8(param_1,param_2);
    }
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + param_2 * 2);
    if (param_2 == 0) {
      return uVar1;
    }
    if (uVar1 != 0) {
      return uVar1;
    }
  }
  return 0xffffffff;
}
