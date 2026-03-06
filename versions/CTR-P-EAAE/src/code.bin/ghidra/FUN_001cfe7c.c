/**
 * FUN_001cfe7c.c
 * Source line: 235724
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_001cfe7c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = FUN_001c4384();
  piVar2 = (int *)(iVar1 + 0xecd0);
  if (((*(int **)(param_1 + 0x194) == piVar2) &&
      (uVar3 = *(uint *)(param_1 + 0x198), uVar3 < *(uint *)(iVar1 + 0xecd4))) &&
     (iVar1 = (**(code **)(*piVar2 + 8))(piVar2,uVar3), iVar1 != 0)) {
    piVar2 = piVar2 + uVar3 * 0x22a + 3;
  }
  else {
    piVar2 = NULL;
  }
  FUN_0076e238(piVar2,param_2,piVar2[0x1eb],1);
  return;
}
