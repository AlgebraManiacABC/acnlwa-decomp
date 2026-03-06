/**
 * FUN_00632acc.c
 * Source line: 949015
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00632acc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0xf0) != 0) && (_DAT_00aaf14c != 0)) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0xf0) + 0x1028), iVar2 != 0)) {
    uVar1 = FUN_00309f84(iVar2,_DAT_00aaf14c + 0x55a6);
    return uVar1;
  }
  return 0;
}
