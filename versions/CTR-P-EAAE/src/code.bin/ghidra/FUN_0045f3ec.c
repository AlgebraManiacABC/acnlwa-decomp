/**
 * FUN_0045f3ec.c
 * Source line: 627215
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_0045f3ec(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1);
  param_1[3] = iVar1 << 0x10 | param_2;
  return;
}
