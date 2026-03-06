/**
 * FUN_0061fc3c.c
 * Source line: 934888
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0061fc3c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = param_1 + uVar2 * 0x214;
    __rt_memclr_w(iVar1 + 0x4990,0x200);
    uVar2 += 1;
    *(undefined4 *)(iVar1 + 0x4b90) = 0;
  } while (uVar2 < 100);
  *(undefined4 *)(param_1 + 0x11ae4) = 0;
  *(undefined1 *)(param_1 + 0x11ae9) = 0;
  return;
}
