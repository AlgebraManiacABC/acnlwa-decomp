/**
 * FUN_003d53b8.c
 * Source line: 546555
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_003d53b8(undefined4 param_1)

{
  if (cRam0096b8f3 == '\0') {
    iRam00adce54 = FUN_003d5240();
    if (iRam00adce54 == 0) {
      iRam00adce54 = 0x1105;
    }
    uRam00add814 = 1;
    do {
      *(int *)(uRam00add814 * 4 + 0xadce54) = *(int *)(uRam00add814 * 4 + 0xadce50) * 0x10dcd;
      uRam00add814 += 1;
    } while (uRam00add814 < 0x270);
    cRam0096b8f3 = '\x01';
  }
  FUN_0039a1f4(0xadce54,param_1);
  return;
}
