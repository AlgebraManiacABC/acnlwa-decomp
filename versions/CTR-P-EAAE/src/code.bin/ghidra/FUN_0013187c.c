/**
 * FUN_0013187c.c
 * Source line: 138101
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0013187c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((0 < param_2) && (iVar1 = FUN_001391c4(param_2 * 4,param_3,param_4,&DAT_008c8484), iVar1 != 0)
     ) {
    param_1[2] = iVar1;
    *param_1 = 0;
    param_1[1] = param_2;
  }
  return;
}
