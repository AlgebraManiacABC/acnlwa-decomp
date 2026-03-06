/**
 * FUN_00349130.c
 * Source line: 445966
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00349130(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0034746c(*param_1 & 0xfffffffe);
  if (-1 < iVar1) {
    param_1[4] = param_4;
    param_1[3] = param_3;
    uVar2 = param_1[2];
    if ((int)(param_4 - (uVar2 + (param_3 < param_1[1]))) < 0 !=
        (SBORROW4(param_4,uVar2) != SBORROW4(param_4 - uVar2,(uint)(param_3 < param_1[1])))) {
      param_1[1] = param_3;
      param_1[2] = param_4;
    }
  }
  return;
}
