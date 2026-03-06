/**
 * FUN_003280ac.c
 * Source line: 428435
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_003280ac(undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_1)();
  if ((iVar1 != 0) && (param_2 < 3)) {
    FUN_004ee364(iVar1,param_2);
    return;
  }
  return;
}
