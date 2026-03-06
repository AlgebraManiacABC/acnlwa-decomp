/**
 * FUN_0059780c.c
 * Source line: 845088
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0059780c(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00164ea8(param_1,param_2,0xa5,0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_004e36c0(param_1,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    *param_3 = 1;
  }
  else {
    *param_3 = 0;
  }
  return 1;
}
