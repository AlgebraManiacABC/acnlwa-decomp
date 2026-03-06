/**
 * FUN_00470168.c
 * Source line: 641287
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_00470168(uint param_1)

{
  int iVar1;
  
  iVar1 = 0xbd4;
  if (param_1 != 0) {
    if (param_1 < 0x1000) {
      iVar1 = param_1 * 0x31 + 0xbd4;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}
