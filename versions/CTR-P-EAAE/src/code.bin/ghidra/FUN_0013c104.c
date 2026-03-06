/**
 * FUN_0013c104.c
 * Source line: 148507
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_0013c104(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(param_1 + 4);
  (**(code **)(*piVar1 + 8))();
  for (uVar2 = 0;
      (uVar2 < *(ushort *)(param_1 + 0x38) &&
      (*(int *)(*(int *)(param_1 + 0x30) + uVar2 * 4) != param_2)); uVar2 = uVar2 + 1 & 0xffff) {
  }
  if (*(ushort *)(param_1 + 0x38) != uVar2) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return uVar2;
  }
  (**(code **)(*piVar1 + 0xc))();
  return 0;
}
