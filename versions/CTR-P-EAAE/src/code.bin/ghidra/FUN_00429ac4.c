/**
 * FUN_00429ac4.c
 * Source line: 593287
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00429ac4(void)

{
  undefined4 uVar1;
  
  if (cRam00974a5c == '\0') {
    uVar1 = 0xe0a1482b;
  }
  else if (cRam00974a5d == '\0') {
    FUN_004263f4(7);
    cRam00974a5d = '\x01';
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0a14827;
  }
  return uVar1;
}
