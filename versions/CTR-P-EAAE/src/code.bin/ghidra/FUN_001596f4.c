/**
 * FUN_001596f4.c
 * Source line: 172170
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_001596f4(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(int *)(*param_1 + 0xc) + *(int *)(*param_1 + 0x10) * 0x10);
  if (((int)param_2 < 0) || ((uint)piVar1[2] <= param_2)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1 + param_2;
  }
  return iVar2;
}
