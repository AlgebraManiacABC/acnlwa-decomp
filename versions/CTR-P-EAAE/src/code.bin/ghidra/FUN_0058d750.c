/**
 * FUN_0058d750.c
 * Source line: 838339
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0058d750(void)

{
  undefined4 uVar1;
  
  if (((cRam0094e43b != '\0') && (cRam0094e43f == '\0')) && (cRam0094e43d != '\0')) {
    cRam0094e43d = '\0';
    uVar1 = FUN_005b4120();
    if (cRam0094e441 != '\0') {
      FUN_0058d488();
      FUN_0058ca3c(uVar1);
    }
    FUN_00585690(uVar1);
    uRam0094e43e = 0;
  }
  return;
}
