/**
 * FUN_00716718.c
 * Source line: 1070545
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00716718(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_00720348(param_1 + uVar2 * 0x302 + 0x18);
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 += 1;
  } while (uVar2 < 6);
  return 0;
}
