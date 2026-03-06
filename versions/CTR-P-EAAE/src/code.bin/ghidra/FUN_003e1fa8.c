/**
 * FUN_003e1fa8.c
 * Source line: 556544
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_003e1fa8(void)

{
  undefined4 uVar1;
  
  if (cRam00974a40 == '\0') {
    uVar1 = 0xe0a1482b;
  }
  else if (cRam00974a41 == '\0') {
    FUN_004263f4(6);
    cRam00974a41 = '\x01';
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0a14827;
  }
  return uVar1;
}
