/**
 * FUN_0056b4d4.c
 * Source line: 812828
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined1 FUN_0056b4d4(uint param_1,int param_2)

{
  undefined1 uVar1;
  
  if (((param_1 & 3) == 0) &&
     ((((int)param_1 % 100 != 0 || ((param_1 & 0xf) == 0)) && (param_2 == 2)))) {
    uVar1 = 0x1d;
  }
  else {
    uVar1 = (&UNK_0089026f)[param_2];
  }
  return uVar1;
}
