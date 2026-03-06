/**
 * FUN_00231374.c
 * Source line: 285940
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00231374(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x354), iVar1 != 0 && DAT_0095debc != 0)) {
    FUN_005f1204(iVar1,param_2,param_3);
    return 1;
  }
  return 0;
}
