/**
 * FUN_00747ba4.c
 * Source line: 1103803
 * Body lines: 14
 */
#include "../../../include/types.h"

int * FUN_00747ba4(int *param_1,uint param_2,int param_3)

{
  if (param_3 == 0) {
    param_1 = (int *)*param_1;
  }
  else {
    param_1 = (int *)FUN_00747c24();
  }
  while( true ) {
    if (param_1 == NULL) {
      return NULL;
    }
    if (*(ushort *)(*param_1 + 0xc) == param_2) break;
    param_1 = (int *)FUN_00747c24(param_1);
  }
  return param_1;
}
