/**
 * FUN_00747b54.c
 * Source line: 1103787
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_00747b54(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  for (param_1 = (int *)*param_1; param_1 != NULL; param_1 = (int *)FUN_00747c24(param_1)) {
    if (*(ushort *)(*param_1 + 0xc) == param_2) {
      iVar1 += 1;
    }
  }
  return iVar1;
}
