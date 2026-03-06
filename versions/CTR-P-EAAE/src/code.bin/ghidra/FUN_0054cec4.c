/**
 * FUN_0054cec4.c
 * Source line: 792355
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0054cec4(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_009056dc;
  param_1[2] = &PTR_DAT_009056fc;
  iVar1 = FUN_00138c88(param_1 + 2);
  if (iVar1 != 0) {
    FUN_004bfc40(param_1 + 2);
  }
  iVar1 = FUN_004c0464(param_1 + 2);
  FUN_002ffb64(iVar1 + -8);
  return;
}
