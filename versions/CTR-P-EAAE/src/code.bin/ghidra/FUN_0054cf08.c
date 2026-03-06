/**
 * FUN_0054cf08.c
 * Source line: 792373
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_0054cf08(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_009056dc;
  param_1[2] = &PTR_DAT_009056fc;
  iVar1 = FUN_00138c88(param_1 + 2);
  if (iVar1 != 0) {
    FUN_004bfc40(param_1 + 2);
  }
  iVar1 = FUN_004c0464(param_1 + 2);
  return iVar1 + -8;
}
