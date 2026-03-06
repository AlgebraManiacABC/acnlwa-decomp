/**
 * FUN_004dcc2c.c
 * Source line: 722960
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_004dcc2c(char *param_1)

{
  int iVar1;
  
  iVar1 = FUN_002fe450((int)*param_1);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) & 0xfff1ffff | 0x80000;
  }
  return;
}
