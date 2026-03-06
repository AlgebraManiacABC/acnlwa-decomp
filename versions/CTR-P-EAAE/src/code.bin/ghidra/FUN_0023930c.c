/**
 * FUN_0023930c.c
 * Source line: 290104
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0023930c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_40 [48];
  
  if ((*(int *)(param_1 + 4) != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x354), iVar1 != 0))
  {
    uVar2 = FUN_0081e8d0(local_40);
    FUN_0056e04c(uVar2,param_2);
    FUN_005f12f4(iVar1,local_40,param_3);
    return 1;
  }
  return 0;
}
