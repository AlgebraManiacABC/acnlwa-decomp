/**
 * FUN_0011f274.c
 * Source line: 122166
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0011f274(undefined4 *param_1)

{
  bool bVar1;
  
  *param_1 = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 0;
  return;
}
