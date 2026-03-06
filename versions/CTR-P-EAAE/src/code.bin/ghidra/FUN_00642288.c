/**
 * FUN_00642288.c
 * Source line: 955543
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00642288(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined *param_5)

{
  int iVar1;
  undefined *local_28;
  char *local_24;
  
  iVar1 = FUN_00713a70();
  if (iVar1 != 0) {
    local_24 = "NNPC_Ev_Halloween";
    local_28 = &DAT_009047f8;
    iVar1 = FUN_008273c8(iVar1,&local_28);
    if (iVar1 != 0) {
      *(byte *)(param_1 + 0x2d2) = *(byte *)(param_1 + 0x2d2) | 2;
    }
  }
  local_28 = param_5;
  FUN_00237f10(param_1,param_2,param_3,param_4);
  return;
}
