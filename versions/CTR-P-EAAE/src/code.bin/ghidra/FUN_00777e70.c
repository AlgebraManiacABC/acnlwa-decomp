/**
 * FUN_00777e70.c
 * Source line: 1135015
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00777e70(undefined4 *param_1)

{
  int iVar1;
  
  param_1[-2] = &UNK_009056dc;
  *param_1 = &PTR_DAT_009056fc;
  iVar1 = FUN_00138c88(param_1);
  if (iVar1 != 0) {
    FUN_004bfc40(param_1);
  }
  iVar1 = FUN_004c0464(param_1);
  FUN_002ffb64(iVar1 + -8);
  return;
}
