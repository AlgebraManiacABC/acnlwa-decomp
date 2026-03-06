/**
 * FUN_0051d134.c
 * Source line: 761991
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0051d134(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 != 0 && param_2 != 0) {
    uVar1 = FUN_0051f9cc();
    if (199 < uVar1) {
      return 0;
    }
    if (0x3c < uVar1) {
      return 1;
    }
  }
  return 2;
}
