/**
 * FUN_00309ccc.c
 * Source line: 407955
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00309ccc(int param_1)

{
  undefined4 uVar1;
  
  if (iRam00a83370 == param_1) {
    uVar1 = 0;
  }
  else if (iRam00a83374 == param_1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
