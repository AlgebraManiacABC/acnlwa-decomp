/**
 * FUN_00237dd0.c
 * Source line: 289317
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00237dd0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_a8 [156];
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x354), iVar1 != 0 && DAT_0095debc != 0)) {
    FUN_0056d5dc(local_a8,param_2);
    FUN_005f1344(iVar1,local_a8);
    return 1;
  }
  return 0;
}
