/**
 * FUN_00660b68.c
 * Source line: 970675
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00660b68(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined1 auStack_40 [48];
  
  iVar1 = FUN_001c4384();
  piVar2 = (int *)(iVar1 + 0xecd0);
  if ((((*(int **)(param_1 + 0x348) == piVar2) &&
       (uVar3 = *(uint *)(param_1 + 0x34c), uVar3 < *(uint *)(iVar1 + 0xecd4))) &&
      (iVar1 = (**(code **)(*piVar2 + 8))(piVar2,uVar3), iVar1 != 0)) &&
     (piVar2 + uVar3 * 0x22a + 3 != NULL)) {
    FUN_0070ab44(param_1 + 0x1b4,auStack_40,*(undefined4 *)(param_1 + 0x25c),0);
    FUN_006c1688(piVar2 + uVar3 * 0x22a + 3,param_1,auStack_40,0);
    return 1;
  }
  return 0;
}
