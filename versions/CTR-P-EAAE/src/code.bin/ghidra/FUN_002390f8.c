/**
 * FUN_002390f8.c
 * Source line: 290042
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_002390f8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_70 [96];
  
  if ((*(int *)(param_1 + 4) != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x354), iVar1 != 0))
  {
    uVar2 = FUN_002fe7f4(local_70,param_2,0);
    FUN_002fe874(iVar1,uVar2,param_3);
    return 1;
  }
  return 0;
}
