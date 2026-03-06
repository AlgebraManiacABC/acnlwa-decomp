/**
 * FUN_006e473c.c
 * Source line: 1042228
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_006e473c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0057ba54();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_00138920(0x9ab57c,param_1 + 0x48);
    if (iVar1 != 0) {
      FUN_0013f000(0x9ab57c,(cro_container *)(param_1 + 0x48));
    }
    uVar2 = 1;
  }
  return uVar2;
}
