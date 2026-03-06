/**
 * FUN_0070ae4c.c
 * Source line: 1062681
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_0070ae4c(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 < 4) {
    iVar2 = FUN_007461d4(param_1 + param_2 * 0x18 + 0xe0);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = FUN_00746854(iVar2 + 0x70);
      uVar1 ^= 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
