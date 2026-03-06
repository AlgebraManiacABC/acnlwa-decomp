/**
 * FUN_00573d9c.c
 * Source line: 818565
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00573d9c(int param_1)

{
  byte bVar1;
  
  if ((*(int *)(param_1 + 0x5f0) != 0) &&
     (bVar1 = *(byte *)(*(int *)(param_1 + 0x5f0) + 0x17) & 0xf, bVar1 < 5)) {
    if (bVar1 == 1) {
      FUN_0057478c();
      return;
    }
    if (bVar1 == 3) {
      FUN_00574a40();
      return;
    }
  }
  return;
}
