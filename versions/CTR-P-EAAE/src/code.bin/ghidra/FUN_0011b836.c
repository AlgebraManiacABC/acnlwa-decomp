/**
 * FUN_0011b836.c
 * Source line: 118291
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0011b836(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)std::__rw_get_cats();
  if (param_2 < piVar1[1]) {
    param_2 *= 8;
    if (*(int *)(*piVar1 + param_2) != -1) {
      FUN_00106940();
      *(undefined4 *)(*piVar1 + param_2) = 0xffffffff;
      uVar2 = FUN_0031b5ec();
      FUN_0031b5b8(*piVar1 + param_2 + 4,uVar2);
    }
  }
  return;
}
