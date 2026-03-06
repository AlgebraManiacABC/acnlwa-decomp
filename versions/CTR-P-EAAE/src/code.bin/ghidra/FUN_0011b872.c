/**
 * FUN_0011b872.c
 * Source line: 118312
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_0011b872(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)std::__rw_get_cats();
  if (param_2 < piVar1[1]) {
    return *piVar1 + param_2 * 8 + 4;
  }
  iVar2 = FUN_0031b5ec();
  return iVar2;
}
