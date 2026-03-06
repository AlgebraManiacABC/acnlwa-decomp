/**
 * FUN_00121110.c
 * Source line: 123664
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00121110(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = param_1 == 0x400;
  if (!bVar1) {
    param_3 = param_1 + -0x401;
    bVar1 = param_3 == 0;
  }
  if (bVar1) {
    iRam00adf9e4 = param_1 + -0x400;
  }
  else if (param_3 == 0xf) {
    iRam00adf9e4 = 2;
  }
  return;
}
