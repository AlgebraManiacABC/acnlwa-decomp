/**
 * FUN_00615974.c
 * Source line: 928033
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00615974(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_006d9058();
  if ((uVar1 < 0x6b) && (*(int *)(&UNK_0086a2f4 + uVar1 * 0x4c) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
