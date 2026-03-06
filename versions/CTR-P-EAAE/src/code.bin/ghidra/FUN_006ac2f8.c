/**
 * FUN_006ac2f8.c
 * Source line: 1007375
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_006ac2f8(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x4c))(param_1);
  uVar1 = FUN_004eedbc();
  FUN_004eddd4(uVar1,param_1[0x1f]);
  iVar2 = FUN_006ab41c(param_1);
  if (iVar2 != 0) {
    FUN_006beb5c(iVar2,0);
  }
  if ((param_1[0xe4] != 3) && (*(char *)((int)param_1 + 0x4d1) != '\0')) {
    FUN_004ee364(param_1 + 0xe1,0);
    return;
  }
  return;
}
