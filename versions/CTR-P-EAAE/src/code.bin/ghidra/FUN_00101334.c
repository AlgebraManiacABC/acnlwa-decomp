/**
 * FUN_00101334.c
 * Source line: 104643
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00101334(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)__rt_errno_addr();
  uVar2 = *puVar1;
  FUN_0010211c(param_1,0,10);
  *puVar1 = uVar2;
  return;
}
