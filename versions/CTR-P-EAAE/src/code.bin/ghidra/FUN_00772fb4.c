/**
 * FUN_00772fb4.c
 * Source line: 1134114
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00772fb4(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_18 [16];
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x74) != 0) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x74) + 0x1028), iVar3 != 0)) {
    puVar2 = (undefined4 *)FUN_005fdf68(auStack_18,iVar3 + 0x24f2,0xb);
    *puVar2 = &DAT_00908b9c;
    (**(code **)(*param_2 + 0x14))(param_2,auStack_18);
    uVar1 = 1;
  }
  return uVar1;
}
