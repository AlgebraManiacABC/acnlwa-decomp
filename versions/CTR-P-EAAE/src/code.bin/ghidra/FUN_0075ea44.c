/**
 * FUN_0075ea44.c
 * Source line: 1119136
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined1 FUN_0075ea44(int param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_0075dfe8(DAT_0095362c);
  if ((iVar2 == 0) && (param_2 < 4)) {
    uVar1 = *(undefined1 *)(param_1 + param_2);
  }
  else {
    uVar1 = 0xa5;
  }
  return uVar1;
}
