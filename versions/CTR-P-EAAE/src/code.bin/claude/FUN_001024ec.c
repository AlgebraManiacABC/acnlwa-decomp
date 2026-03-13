/**
 * FUN_001024ec.c
 * Source line: 105992
 * Body lines: 3
 */
#include "../../../include/types.h"

byte FUN_001024ec(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_002f7a10();
  return *(byte *)(*piVar1 + param_1) & 1;
}
