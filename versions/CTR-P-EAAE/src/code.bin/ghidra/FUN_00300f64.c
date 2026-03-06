/**
 * FUN_00300f64.c
 * Source line: 398704
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00300f64(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002ff8b0(4);
  if ((iVar1 < 4) && (param_2 <= *(byte *)(iVar1 + param_1 + 8))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
