/**
 * FUN_00697f60.c
 * Source line: 999994
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00697f60(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if ((((DAT_009506b0 == -1) && (DAT_009506b4 != 0)) &&
      (iVar1 = FUN_006dccb4(DAT_009506b4,param_1), iVar1 != 0)) &&
     (thunk_FUN_008b1b88(iVar1,param_2), param_3 == 0)) {
    thunk_FUN_008b1b88(iVar1,param_2 ^ 1);
    return;
  }
  return;
}
