/**
 * FUN_007478ec.c
 * Source line: 1103613
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_007478ec(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = *(uint *)(param_2 + 4);
  if ((uVar1 < 0x400) || (0x1ff < (uVar1 & 0x3ff))) {
    uVar1 &= 0x3ff;
  }
  else {
    uVar1 = (uVar1 & 0x3ff) + 0x200;
  }
  puVar2 = *(undefined4 **)(param_1 + uVar1 * 0x14 + 8);
  if (puVar2 == NULL) {
    return 0;
  }
  return *puVar2;
}
