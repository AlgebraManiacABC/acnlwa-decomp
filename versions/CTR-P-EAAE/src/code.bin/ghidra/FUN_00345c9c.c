/**
 * FUN_00345c9c.c
 * Source line: 442823
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_00345c9c(void)

{
  int iVar1;
  undefined4 local_10;
  char local_c [8];
  
  local_10 = FUN_0013dee0();
  iVar1 = FUN_003488e4(&local_10,local_c);
  if (iVar1 < 0) {
    FUN_0012f598(iVar1,0x345cc0);
  }
  return (int)local_c[0];
}
