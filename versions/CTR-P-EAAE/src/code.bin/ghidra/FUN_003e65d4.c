/**
 * FUN_003e65d4.c
 * Source line: 559345
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_003e65d4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_10;
  
  local_10 = param_4;
  iVar1 = FUN_00484520(param_2,param_3,param_4,&local_10);
  if (iVar1 == 0) {
    *(undefined4 *)(*param_1 + 4) = *(undefined4 *)(*(int *)(local_10 + 0x18) + 4);
    FUN_0048455c();
  }
  return iVar1 == 0;
}
