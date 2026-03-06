/**
 * FUN_00744844.c
 * Source line: 1100906
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_00744844(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(**(int **)(param_1 + 4) + 0x44);
  iVar1 = (*pcVar3)(*(int **)(param_1 + 4),param_2,pcVar3,param_4,param_4);
  if ((iVar1 == 0) &&
     ((iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x44))(*(int **)(param_1 + 8),param_2),
      iVar1 != 0 || (*(char *)(param_1 + 0xc) == '\0')))) {
    uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x3c))(*(int **)(param_1 + 8),param_2);
    return uVar2 & 0xffffff;
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x3c))(*(int **)(param_1 + 4),param_2);
  return uVar2 & 0xffffff;
}
