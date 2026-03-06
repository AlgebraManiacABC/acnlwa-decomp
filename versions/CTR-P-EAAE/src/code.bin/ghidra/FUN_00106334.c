/**
 * FUN_00106334.c
 * Source line: 107620
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_00106334(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_002ff81c(param_2,param_1 + 0x16);
  if ((iVar1 != 0) && (iVar1 = FUN_002ff8f0(param_3,param_1), iVar1 == 0)) {
    return 1;
  }
  return 0;
}
