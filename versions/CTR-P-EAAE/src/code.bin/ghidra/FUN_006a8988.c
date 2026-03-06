/**
 * FUN_006a8988.c
 * Source line: 1004998
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_006a8988(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *local_10;
  char *local_c;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0x18) == 0) {
    local_c = "CecMessageIcon";
    local_10 = &DAT_009047f8;
    FUN_0031758c(param_1 + 0x3c,0x1080,param_2,&local_10,1,0);
    uVar1 = FUN_00125b38((astruct *)(param_1 + 0x14),DAT_00952ae4,*(undefined4 *)(param_1 + 0x40),0)
    ;
  }
  return uVar1;
}
