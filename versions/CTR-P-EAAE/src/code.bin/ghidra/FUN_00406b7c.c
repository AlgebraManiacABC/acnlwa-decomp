/**
 * FUN_00406b7c.c
 * Source line: 573719
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00406b7c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_003e41a4(param_1 + 0x84,*(undefined4 *)(param_2 + 0x1c));
  if ((iVar1 != 0) && (iVar2 = FUN_00734798(iVar1 + 4,param_2), iVar2 == 0)) {
    FUN_00450df0(param_3,iVar1 + 4);
    return 1;
  }
  return 0;
}
