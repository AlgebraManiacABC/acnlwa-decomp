/**
 * FUN_0071d4e0.c
 * Source line: 1075022
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0071d4e0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_0071fd34(param_1 + uVar2 * 0x7dd8);
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 += 1;
  } while (uVar2 < 0x10);
  return 0;
}
