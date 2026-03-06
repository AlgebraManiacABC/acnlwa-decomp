/**
 * FUN_00718bf4.c
 * Source line: 1071726
 * Body lines: 6
 */
#include "../../../include/types.h"

int FUN_00718bf4(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = param_1 + 0x280;
  if (param_2 < 4) {
    iVar1 = param_1 + 0x280 + param_2 * 0x28;
  }
  return iVar1 + 0x14;
}
