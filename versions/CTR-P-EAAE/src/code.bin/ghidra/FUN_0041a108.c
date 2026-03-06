/**
 * FUN_0041a108.c
 * Source line: 584114
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0041a108(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x17];
  *param_1 = &UNK_008ffc54;
  if (iVar1 != 0) {
    FUN_005380a8(iVar1);
    FUN_0053814c(iVar1);
    param_1[0x17] = 0;
  }
  FUN_00426fb0(param_1);
  FUN_004260c4();
  return;
}
