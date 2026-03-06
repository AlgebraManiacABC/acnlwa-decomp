/**
 * FUN_00346100.c
 * Source line: 443022
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_00346100(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *local_10;
  
  local_10 = param_4;
  iVar1 = FUN_00348560(&local_10);
  if (-1 < iVar1) {
    iVar2 = FUN_00135384(param_1,local_10,0);
    iVar1 = 0;
    if (iVar2 < 0) {
      (**(code **)(*local_10 + 0x30))();
      iVar1 = iVar2;
    }
  }
  return iVar1;
}
