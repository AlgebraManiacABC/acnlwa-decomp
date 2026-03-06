/**
 * FUN_0076fcf0.c
 * Source line: 1132851
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0076fcf0(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  if (iVar2 != -1) {
    uVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    FUN_005ca340(uVar1);
    uVar3 = FUN_005ca1d4();
    return uVar3;
  }
  return 0;
}
