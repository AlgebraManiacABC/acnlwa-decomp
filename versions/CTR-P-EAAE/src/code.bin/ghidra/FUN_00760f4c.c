/**
 * FUN_00760f4c.c
 * Source line: 1120233
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00760f4c(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_18 [16];
  
  if ((*(int *)(param_1 + 0xf0) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0xf0) + 0x1028), iVar1 != 0)) {
    puVar2 = (undefined4 *)FUN_005fdf68(auStack_18,iVar1 + 0x24f2,0xb);
    *puVar2 = &DAT_00908b9c;
    (**(code **)(*param_2 + 0x14))(param_2,auStack_18);
    return 1;
  }
  return 0;
}
