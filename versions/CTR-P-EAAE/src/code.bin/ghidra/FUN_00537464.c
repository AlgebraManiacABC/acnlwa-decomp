/**
 * FUN_00537464.c
 * Source line: 778692
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_00537464(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_00952620 != 0) {
    param_2 = (uint)*(byte *)(DAT_00952620 + 0xa1);
  }
  iVar1 = DAT_00952620;
  if (DAT_00952620 == 0 || param_2 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}
