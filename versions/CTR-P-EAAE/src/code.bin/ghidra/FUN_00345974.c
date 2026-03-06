/**
 * FUN_00345974.c
 * Source line: 442647
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00345974(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_c [2];
  
  iVar1 = FUN_0013e044(param_1 + 8,local_c,param_2,param_3,param_4);
  if (iVar1 < 0) {
    FUN_0012f598(iVar1,0x3459a0);
  }
  return local_c[0];
}
