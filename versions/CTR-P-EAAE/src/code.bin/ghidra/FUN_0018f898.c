/**
 * FUN_0018f898.c
 * Source line: 204113
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_0018f898(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if ((param_2 < 4) && (iVar1 = param_1 + 0x14 + param_2 * 0x78, *(int *)(iVar1 + 0x44) == param_3))
  {
    FUN_002b8090(iVar1 + 0x5c,param_4,param_5);
    return 1;
  }
  return 0;
}
