/**
 * FUN_00578c18.c
 * Source line: 821978
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00578c18(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_005c33cc(4,0);
  iVar2 = FUN_007523a8(param_1);
  if ((iVar2 == 0) && (iVar2 = (**(code **)(*param_1 + 0x70))(param_1,uVar1), iVar2 == 0)) {
    return;
  }
  FUN_0052cbe0(param_1);
  return;
}
