/**
 * FUN_0071d528.c
 * Source line: 1075041
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0071d528(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_0071fce4(param_1 + uVar2 * 0x7dd8,param_2);
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 += 1;
  } while (uVar2 < 0x10);
  return 0;
}
