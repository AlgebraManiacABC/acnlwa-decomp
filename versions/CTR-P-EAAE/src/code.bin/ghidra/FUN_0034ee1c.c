/**
 * FUN_0034ee1c.c
 * Source line: 450812
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0034ee1c(undefined4 param_1,undefined4 param_2)

{
  if (cRam0097d804 != '\0') {
    uRam00ae82c4 = 0;
    uRam00ae82c8 = (undefined1)param_2;
    uRam00ae82c9 = (undefined1)((uint)param_2 >> 8);
    uRam00ae82ca = (undefined1)((uint)param_2 >> 0x10);
    uRam00ae82bc = 0xffffffff;
    FUN_00135be4();
    uRam0097d808 = 0;
    cRam0097d804 = '\0';
  }
  return;
}
