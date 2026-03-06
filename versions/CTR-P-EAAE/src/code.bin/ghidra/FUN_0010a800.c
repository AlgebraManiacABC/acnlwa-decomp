/**
 * FUN_0010a800.c
 * Source line: 109032
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0010a800(int param_1)

{
  int iVar1;
  int iVar2;
  
  __rt_memclr_w(param_1,0xec);
  iVar2 = 0;
  do {
    Item_Copy((Item_t *)(iVar2 * 4 + param_1),(Item_t *)&DAT_0095bfdc);
    FUN_003052f0(iVar2 * 0x2e + param_1 + 0x14);
    FUN_00303534(iVar2 * 8 + param_1 + 0xcc,0);
    iVar1 = param_1 + iVar2;
    iVar2 += 1;
    *(undefined1 *)(iVar1 + 0x10) = 0;
  } while (iVar2 < 4);
  return;
}
