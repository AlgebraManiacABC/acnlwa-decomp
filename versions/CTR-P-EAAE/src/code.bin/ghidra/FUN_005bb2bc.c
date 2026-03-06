/**
 * FUN_005bb2bc.c
 * Source line: 867204
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005bb2bc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = 0;
    do {
      FUN_005ba2d0(param_1 + iVar2 * 0x80 + iVar1 * 0x40,param_2);
      iVar1 += 1;
    } while (iVar1 < 2);
    iVar2 += 1;
  } while (iVar2 < 4);
  return;
}
