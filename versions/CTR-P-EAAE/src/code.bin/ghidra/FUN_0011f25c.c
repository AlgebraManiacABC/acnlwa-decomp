/**
 * FUN_0011f25c.c
 * Source line: 122152
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0011f25c(undefined4 *param_1)

{
  bool bVar1;
  
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 1;
  return;
}
