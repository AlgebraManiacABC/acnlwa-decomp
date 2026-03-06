/**
 * FUN_0039d484.c
 * Source line: 506310
 * Body lines: 14
 */
#include "../../../include/types.h"

bool FUN_0039d484(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = *(int *)(param_2 + 0x10) - *(int *)(param_2 + 0xc);
  uVar2 = param_1[9];
  bVar3 = uVar2 <= uVar1;
  if (bVar3) {
    uVar2 = param_1[10];
  }
  if (bVar3 && uVar1 <= uVar2) {
    FUN_003cc524(param_1 + 3);
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  return bVar3 && uVar1 <= uVar2;
}
