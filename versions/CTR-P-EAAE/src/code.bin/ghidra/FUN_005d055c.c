/**
 * FUN_005d055c.c
 * Source line: 881885
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_005d055c(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_0050d91c();
  if (DAT_009514c8 == 0) {
    uVar1 = FUN_0050d4dc();
    puVar2 = (undefined4 *)FUN_002fd108(0x2520,uVar1,4);
    *puVar2 = 0;
    puVar2[1] = 0;
    iVar3 = FUN_00113d14(puVar2 + 2);
    DAT_009514c8 = iVar3 + -8;
  }
  return;
}
