/**
 * FUN_005ced40.c
 * Source line: 881008
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005ced40(uint param_1)

{
  if ((param_1 & ~(int)(char)bRam0094e3b1) != 0) {
    uRam0094e3b0 = FUN_003505c0();
  }
  bRam0094e3b1 |= (byte)param_1;
  FUN_0047f410(param_1);
  return;
}
