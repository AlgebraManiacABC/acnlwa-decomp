/**
 * FUN_00425998.c
 * Source line: 589472
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00425998(void)

{
  undefined4 uVar1;
  
  if (cRam00974a00 == '\0') {
    uVar1 = 0xe0a1482b;
  }
  else if (cRam00974a01 == '\0') {
    FUN_004263f4(2);
    cRam00974a01 = '\x01';
    FUN_004279e4();
    FUN_0042720c();
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0a14827;
  }
  return uVar1;
}
