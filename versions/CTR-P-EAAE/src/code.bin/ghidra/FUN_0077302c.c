/**
 * FUN_0077302c.c
 * Source line: 1134137
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_0077302c(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_18 [12];
  
  if ((((*(int *)(param_1 + 0x74) != 0) && (_DAT_00aaf14c != 0)) &&
      (iVar2 = *(int *)(*(int *)(param_1 + 0x74) + 0x1028), iVar2 != 0)) &&
     (iVar2 = FUN_00309eb8(iVar2,_DAT_00aaf14c + 0x55a6), iVar2 != 0)) {
    puVar1 = (undefined4 *)FUN_005fdf68(auStack_18,iVar2 + 0x2e,0x11);
    *puVar1 = &DAT_00908b9c;
    (**(code **)(*param_2 + 0x14))(param_2,auStack_18);
    return 1;
  }
  return 1;
}
