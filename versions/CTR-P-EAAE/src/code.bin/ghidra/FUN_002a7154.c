/**
 * FUN_002a7154.c
 * Source line: 346525
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_002a7154(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_002fc900();
  if (iVar1 == 0) {
    iVar1 = FUN_002fb94c();
    return iVar1;
  }
  iVar1 = FUN_002fe8a8(0);
  iVar1 += 0x5544;
  if (param_1 < 4) {
    iVar1 += param_1 * 0x18;
  }
  return iVar1;
}
