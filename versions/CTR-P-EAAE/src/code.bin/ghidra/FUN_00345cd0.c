/**
 * FUN_00345cd0.c
 * Source line: 442840
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_00345cd0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_10;
  char local_c [8];
  
  local_10 = FUN_0013dee0(param_1);
  iVar1 = FUN_0034891c(&local_10,local_c);
  if (iVar1 < 0) {
    FUN_0012f598(iVar1,0x345cf8);
  }
  return (int)local_c[0];
}
