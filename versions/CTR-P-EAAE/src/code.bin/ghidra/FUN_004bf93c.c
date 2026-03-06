/**
 * FUN_004bf93c.c
 * Source line: 701709
 * Body lines: 14
 */
#include "../../../include/types.h"

bool FUN_004bf93c(undefined1 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (iVar1 != 0) {
    iVar2 = FUN_00140f54();
    iVar3 = FUN_004c885c(iVar2,7);
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + 0x184);
    *(undefined1 *)(iVar3 + 4) = 0x34;
    *(undefined1 *)(iVar3 + 0x10) = param_1;
    *(int **)(iVar3 + 0x14) = param_2;
    FUN_004c8b24(iVar2,iVar3);
  }
  return iVar1 != 0;
}
