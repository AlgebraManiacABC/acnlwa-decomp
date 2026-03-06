/**
 * FUN_005ca4b4.c
 * Source line: 878470
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_005ca4b4(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 < 0xfc) && (iVar1 = strcmp("fobj",*(char **)(param_1 * 4 + 0x95bae0)), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
