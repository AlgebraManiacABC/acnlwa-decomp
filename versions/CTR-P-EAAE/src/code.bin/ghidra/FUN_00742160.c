/**
 * FUN_00742160.c
 * Source line: 1099550
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00742160(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_8;
  
  local_8 = param_4;
  iVar1 = FUN_00141a9c(param_1 + 4,&local_8,4);
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = 0, (local_8 & 0xff) != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
