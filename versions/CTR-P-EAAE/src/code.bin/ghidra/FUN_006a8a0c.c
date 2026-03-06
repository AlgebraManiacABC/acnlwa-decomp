/**
 * FUN_006a8a0c.c
 * Source line: 1005018
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_006a8a0c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *local_10;
  char *local_c;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0x28) == 0) {
    local_c = "ExtSaveDataIcon";
    local_10 = &DAT_009047f8;
    FUN_0031758c(param_1 + 0x44,0x4000,param_2,&local_10,1,0);
    uVar1 = FUN_00125b38((astruct *)(param_1 + 0x24),DAT_00952ae8,*(undefined4 *)(param_1 + 0x48),0)
    ;
  }
  return uVar1;
}
