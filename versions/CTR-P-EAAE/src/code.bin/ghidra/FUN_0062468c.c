/**
 * FUN_0062468c.c
 * Source line: 937921
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0062468c(void)

{
  undefined4 in_r3;
  uint uVar1;
  undefined4 uStack_18;
  
  uStack_18 = in_r3;
  FUN_00624c90(&uStack_18);
  uVar1 = 0;
  do {
    FUN_0075e010(DAT_0095362c,uVar1 & 0xff);
    uVar1 += 1;
  } while ((int)uVar1 < 4);
  return 1;
}
