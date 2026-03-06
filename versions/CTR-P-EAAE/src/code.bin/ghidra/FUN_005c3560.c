/**
 * FUN_005c3560.c
 * Source line: 872964
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005c3560(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  int iVar2;
  
  if (((param_5 != 0) || (iVar1 = FUN_005c3e84(), iVar1 != 0)) &&
     (iVar1 = FUN_005c33d0(4,0), iVar1 != 0)) {
    iVar2 = GET_BYTE_00957322();
    if (iVar2 == 0x5c) {
      param_2 = 0;
    }
    if (param_5 == 0) {
      FUN_006739b8(iVar1,param_1,param_2,0,0,0,param_4,1,param_3);
      return;
    }
    FUN_006739b8(iVar1,param_1,param_2,0,0,0,param_4,0,param_3);
  }
  return;
}
