/**
 * FUN_0044cd3c.c
 * Source line: 613497
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0044cd3c(void)

{
  undefined4 uVar1;
  
  if (cRam00974a68 == '\0') {
    uVar1 = 0xe0a1482b;
  }
  else if (cRam00974a69 == '\0') {
    FUN_004263f4(4);
    cRam00974a69 = '\x01';
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0a14827;
  }
  return uVar1;
}
