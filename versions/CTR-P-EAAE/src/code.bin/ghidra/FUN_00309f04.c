/**
 * FUN_00309f04.c
 * Source line: 408009
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00309f04(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((_DAT_00aaf14c != 0) && (iVar1 = FUN_00311a34(_DAT_00aaf14c + 0x55a6,param_1), iVar1 != 0)) {
    uVar2 = FUN_002fb378();
    iVar1 = FUN_00757620(param_1,uVar2,0xfffffff1);
    if ((iVar1 != 0) && (iVar1 = FUN_00757620(param_1,uVar2,0xf), iVar1 == 0)) {
      return 1;
    }
  }
  return 0;
}
