/**
 * FUN_0074426c.c
 * Source line: 1100532
 * Body lines: 3
 */
#include "../../../include/types.h"

int FUN_0074426c(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x3c))();
  return (iVar1 << 8) >> 0x18;
}
