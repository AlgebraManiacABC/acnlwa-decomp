/**
 * FUN_006ac214.c
 * Source line: 1007315
 * Body lines: 10
 */
#include "../../../include/types.h"

int * FUN_006ac214(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = (int *)(*(int *)(param_1 + 0x4cc) + 0xd8);
  if ((((int *)*param_2 == piVar2) &&
      (uVar3 = param_2[1], uVar3 < *(uint *)(*(int *)(param_1 + 0x4cc) + 0xdc))) &&
     (iVar1 = (**(code **)(*piVar2 + 8))(piVar2,uVar3), iVar1 != 0)) {
    return piVar2 + uVar3 * 5 + 3;
  }
  return NULL;
}
