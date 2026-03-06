/**
 * FUN_0051d168.c
 * Source line: 762010
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0051d168(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0051f9cc();
  if (uVar1 < 200) {
    if (uVar1 < 0x3d) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
