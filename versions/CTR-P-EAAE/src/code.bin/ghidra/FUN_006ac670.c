/**
 * FUN_006ac670.c
 * Source line: 1007545
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_006ac670(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  FUN_00317cc8(param_1 + 0x164,0,param_3,param_4,param_4);
  piVar2 = (int *)(*(int *)(param_1 + 0x4cc) + 0x7020);
  if (((*(int **)(param_1 + 0x274) == piVar2) &&
      (uVar3 = *(uint *)(param_1 + 0x278), uVar3 < *(uint *)(*(int *)(param_1 + 0x4cc) + 0x7024)))
     && (iVar1 = (**(code **)(*piVar2 + 8))(piVar2,uVar3), iVar1 != 0)) {
    piVar2 = piVar2 + uVar3 * 5 + 3;
  }
  else {
    piVar2 = NULL;
  }
  FUN_001cbd30(param_1 + 900,param_2,piVar2 + 1,param_1 + 0x78,param_3);
  return;
}
