/**
 * FUN_003d57cc.c
 * Source line: 546795
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_003d57cc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_00356494(param_2);
  if (iVar1 != 0) {
    local_10 = *(undefined4 *)(param_2 + 0x44);
    FUN_003cf2fc(param_1,&local_10,4);
  }
  return iVar1 != 0;
}
