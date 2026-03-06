/**
 * FUN_00537328.c
 * Source line: 778591
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_00537328(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_00952620 != 0) {
    param_2 = (uint)*(byte *)(DAT_00952620 + 0xa1);
  }
  iVar1 = DAT_00952620;
  if (DAT_00952620 == 0 || param_2 == 0) {
    iVar1 = 0;
  }
  return *(byte *)(iVar1 + 0xa0) < 0x10;
}
