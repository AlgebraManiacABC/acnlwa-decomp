/**
 * FUN_005376d8.c
 * Source line: 778751
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_005376d8(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_00952620 != 0) {
    param_2 = (uint)*(byte *)(DAT_00952620 + 0xa1);
  }
  iVar1 = DAT_00952620;
  if (DAT_00952620 == 0 || param_2 == 0) {
    iVar1 = 0;
  }
  if (*(byte *)(iVar1 + 0xa0) < 0x10) {
    iVar1 = 0x10 - (uint)*(byte *)(iVar1 + 0xa0);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
