/**
 * FUN_006017d0.c
 * Source line: 917651
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_006017d0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2);
  if ((iVar1 != 0) && (uVar2 = *(uint *)(param_1 + 0x5c), uVar2 < 10)) {
    puVar3 = (undefined4 *)(param_1 + 0xc + uVar2 * 8);
    *(uint *)(param_1 + 0x5c) = uVar2 + 1;
    *puVar3 = *(undefined4 *)(param_1 + 4);
    puVar3[1] = *(undefined4 *)(param_1 + 8);
    *(int *)(param_1 + 4) = iVar1;
    *(undefined4 *)(param_1 + 8) = uRam0095df14;
  }
  return;
}
