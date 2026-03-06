/**
 * FUN_0062463c.c
 * Source line: 937896
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0062463c(void)

{
  int iVar1;
  undefined4 in_r3;
  uint uVar2;
  undefined4 uStack_18;
  
  uStack_18 = in_r3;
  FUN_00624c90(&uStack_18);
  uVar2 = 0;
  do {
    iVar1 = FUN_0075e010(DAT_0095362c,uVar2 & 0xff);
    if (iVar1 != 0) {
      FUN_00626bd8(uVar2 & 0xff,&uStack_18);
    }
    uVar2 += 1;
  } while ((int)uVar2 < 4);
  return;
}
