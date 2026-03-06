/**
 * FUN_007336dc.c
 * Source line: 1089077
 * Body lines: 5
 */
#include "../../../include/types.h"

undefined4 FUN_007336dc(void)

{
  if (((iRam0097d428 - 0x100000U < 0x3ff00000) && (*(byte *)(iRam0097d428 + 99) < 0xc)) &&
     (*(byte *)(iRam0097d428 + 99) == *(byte *)(iRam0097d428 + 0x62))) {
    return 1;
  }
  return 0;
}
