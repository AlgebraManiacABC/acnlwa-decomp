/**
 * FUN_001eadc4.c
 * Source line: 251800
 * Body lines: 14
 */
#include "../../../include/types.h"

bool FUN_001eadc4(undefined4 param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar2 = FUN_001f38d8(&local_18,FUN_001e9130,param_3,param_4,10);
  if (iVar2 != 0) {
    FUN_006a5f0c(param_1,local_18,uStack_14);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    sVar1 = FUN_005ce2a8(param_1,0);
    param_2[1] = sVar1 * 0x2000 + -0x8000;
  }
  return iVar2 != 0;
}
