/**
 * FUN_006246ec.c
 * Source line: 937940
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_006246ec(void)

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
      FUN_00626c2c(uVar2 & 0xff,&uStack_18);
    }
    uVar2 += 1;
  } while ((int)uVar2 < 4);
  return;
}
