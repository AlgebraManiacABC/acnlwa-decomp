/**
 * FUN_0023b164.c
 * Source line: 291586
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_0023b164(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 4) != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x354), iVar1 != 0))
  {
    FUN_005f11b4(iVar1,param_2,param_3,param_4);
    return 1;
  }
  return 0;
}
