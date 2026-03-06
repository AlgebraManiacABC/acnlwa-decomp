/**
 * FUN_002f7cdc.c
 * Source line: 390092
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_002f7cdc(char *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_002f7a2e(param_1,param_2,param_3,&LAB_0011c194_1);
  iVar2 = FUN_001032ee(param_2);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  return uVar1;
}
