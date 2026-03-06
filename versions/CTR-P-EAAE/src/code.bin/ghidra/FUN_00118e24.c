/**
 * FUN_00118e24.c
 * Source line: 117196
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00118e24(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00308970(param_2,param_1,10);
  if (((uVar1 < 10) && ((*(byte *)(param_1 + 0x1739e) & 0xf) != 2)) &&
     ((int)*(char *)(param_1 + 0x1739a) == uVar1)) {
    return 1;
  }
  return 0;
}
