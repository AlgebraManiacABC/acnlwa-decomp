/**
 * FUN_0071d42c.c
 * Source line: 1074970
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_0071d42c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  param_1 += 8;
  uVar2 = 0;
  do {
    iVar1 = FUN_002fbd54(param_1 + 0x1420);
    if (iVar1 == 0) {
      return 1;
    }
    uVar2 += 1;
    param_1 += 0x14b0;
  } while (uVar2 < 0x20);
  return 0;
}
