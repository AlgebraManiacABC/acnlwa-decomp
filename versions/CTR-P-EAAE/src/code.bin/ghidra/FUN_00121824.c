/**
 * FUN_00121824.c
 * Source line: 124119
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00121824(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0x20000) {
    FUN_0012a130();
    return 0x1f2fffff;
  }
  if (param_1 == 0x30000) {
    FUN_0012a130(0x30000);
    uVar1 = 0x1f5fffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
