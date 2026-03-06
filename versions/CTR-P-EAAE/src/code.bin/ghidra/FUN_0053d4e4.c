/**
 * FUN_0053d4e4.c
 * Source line: 782474
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0053d4e4(undefined4 *param_1)

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
  FUN_002ffb64(param_1);
  return;
}
