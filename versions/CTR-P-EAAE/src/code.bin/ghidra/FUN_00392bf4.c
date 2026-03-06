/**
 * FUN_00392bf4.c
 * Source line: 500568
 * Body lines: 14
 */
#include "../../../include/types.h"

bool FUN_00392bf4(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = *(int *)(param_2 + 0x10) - *(int *)(param_2 + 0xc);
  uVar2 = param_1[8];
  bVar3 = uVar2 <= uVar1;
  if (bVar3) {
    uVar2 = param_1[9];
  }
  if (bVar3 && uVar1 <= uVar2) {
    FUN_003cc524(param_1 + 2);
    (**(code **)(*param_1 + 0x1c))(param_1);
  }
  return bVar3 && uVar1 <= uVar2;
}
