/**
 * FUN_007326d4.c
 * Source line: 1088307
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_007326d4(int *param_1)

{
  undefined4 uVar1;
  
  if (((*param_1 == 0x6498ab32) && ((char)param_1[1] == '\x01' || (char)param_1[1] == '\x02')) &&
     (param_1[0x16e] - 0xcU < 0x5ab)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
