/**
 * FUN_0018f6a0.c
 * Source line: 204014
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_0018f6a0(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_2 < 4) && (iVar1 = param_1 + 0x14 + param_2 * 0x78, *(int *)(iVar1 + 0x44) == param_3))
  {
    FUN_001c987c(iVar1,param_4);
    return 1;
  }
  return 0;
}
