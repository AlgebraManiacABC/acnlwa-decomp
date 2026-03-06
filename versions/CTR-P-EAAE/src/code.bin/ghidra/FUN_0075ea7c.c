/**
 * FUN_0075ea7c.c
 * Source line: 1119154
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined1 FUN_0075ea7c(int param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_0075dfe8(DAT_0095362c);
  if ((iVar2 == 0) && (param_2 < 4)) {
    uVar1 = *(undefined1 *)(param_1 + param_2 + 4);
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}
