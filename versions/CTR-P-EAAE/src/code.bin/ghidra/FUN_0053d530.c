/**
 * FUN_0053d530.c
 * Source line: 782493
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 * FUN_0053d530(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_00903d1c;
  iVar1 = param_1[1];
  if (iVar1 != iRam0097ea00) {
    if (iVar1 != 0) {
      FUN_0053ad94(iVar1,param_1);
    }
    param_1[1] = iRam0097ea00;
  }
  return param_1;
}
