/**
 * FUN_001ceeb4.c
 * Source line: 235180
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_001ceeb4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = FUN_001c4384();
  piVar2 = (int *)(iVar1 + 0xecd0);
  if (((*(int **)(param_4 + 0x348) == piVar2) &&
      (uVar3 = *(uint *)(param_4 + 0x34c), uVar3 < *(uint *)(iVar1 + 0xecd4))) &&
     (iVar1 = (**(code **)(*piVar2 + 8))(piVar2,uVar3), iVar1 != 0)) {
    piVar2 = piVar2 + uVar3 * 0x22a + 3;
  }
  else {
    piVar2 = NULL;
  }
  FUN_006be440(param_1,param_2,param_3,piVar2,param_5,param_6,0);
  return;
}
