/**
 * FUN_007618d4.c
 * Source line: 1120900
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_007618d4(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_18 [16];
  
  if ((((*(int *)(param_1 + 0xf0) != 0) && (_DAT_00aaf14c != 0)) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0xf0) + 0x1028), iVar1 != 0)) &&
     (iVar1 = FUN_00309eb8(iVar1,_DAT_00aaf14c + 0x55a6), iVar1 != 0)) {
    puVar2 = (undefined4 *)FUN_005fdf68(auStack_18,iVar1 + 0x50,9);
    *puVar2 = &DAT_00908b9c;
    (**(code **)(*param_2 + 0x14))(param_2,auStack_18);
    return 1;
  }
  return 0;
}
