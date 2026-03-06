/**
 * FUN_00752d74.c
 * Source line: 1109078
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00752d74(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_002f74e0(0xa0016);
  if ((iVar1 == 0) &&
     ((iVar1 = FUN_002f74e0(0x80000,param_2), iVar1 != 0 ||
      (iVar1 = FUN_002f74e0(0x100000,param_2), iVar1 != 0)))) {
    return 1;
  }
  return 0;
}
