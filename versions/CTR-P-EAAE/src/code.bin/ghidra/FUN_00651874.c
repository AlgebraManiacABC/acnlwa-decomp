/**
 * FUN_00651874.c
 * Source line: 962566
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00651874(int *param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x5c))(param_1);
  if (iVar1 != 0) {
    fVar2 = (float)FUN_0074fe34(param_1 + 0x118);
    param_1[0x213] = (int)(SQRT(fVar2) * 0.375);
    param_1[0x214] = (int)((SQRT(fVar2) * 0.375 + 13.0) / 13.0);
  }
  return;
}
