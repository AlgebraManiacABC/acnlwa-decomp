/**
 * FUN_0050d91c.c
 * Source line: 751994
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0050d91c(void)

{
  undefined4 uVar1;
  undefined *local_18;
  char *local_14;
  
  uVar1 = uRam00952c9c;
  if (DAT_009535e4 == 0) {
    local_14 = "CecHeap";
    local_18 = &DAT_009047f8;
    uRam009535e8 = FUN_002f6e78(0x28000,&local_18,uRam00952c9c,1,0);
    FUN_0034cd5c(&DAT_009535ec);
    uVar1 = FUN_002fd108(0x8bc,uVar1,4);
    __rt_memclr_w(uVar1,0x8bc);
    DAT_009535e4 = FUN_0034ed20(uVar1);
    FUN_0034d018();
  }
  return;
}
