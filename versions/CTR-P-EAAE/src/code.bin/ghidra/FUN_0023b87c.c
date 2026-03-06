/**
 * FUN_0023b87c.c
 * Source line: 291905
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0023b87c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_40 [48];
  
  if ((*(int *)(param_1 + 4) != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x354), iVar1 != 0))
  {
    uVar2 = FUN_0081e8d0(local_40);
    FUN_0056d488(uVar2,param_2 + 2,*(byte *)(param_2 + 0x14) & 1);
    FUN_00300a64(iVar1,local_40,param_3);
    return 1;
  }
  return 0;
}
