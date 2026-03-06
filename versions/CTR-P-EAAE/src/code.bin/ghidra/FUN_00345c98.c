/**
 * FUN_00345c98.c
 * Source line: 442806
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_00345c98(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack_10;
  char acStack_c [8];
  
  uStack_10 = FUN_0013dee0(param_1);
  iVar1 = FUN_003488e4(&uStack_10,acStack_c);
  if (iVar1 < 0) {
    FUN_0012f598(iVar1,0x345cc0);
  }
  return (int)acStack_c[0];
}
