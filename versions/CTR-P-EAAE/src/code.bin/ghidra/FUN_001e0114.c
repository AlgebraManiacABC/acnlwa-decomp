/**
 * FUN_001e0114.c
 * Source line: 246526
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_001e0114(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = param_1 + uVar2 * 0x870;
    __rt_memclr_w(iVar1,0x2a);
    FUN_003052f0(iVar1 + 0x2a);
    __rt_memclr_w(iVar1 + 0x58,0xf);
    *(undefined1 *)(iVar1 + 0x67) = 0;
    *(undefined1 *)(iVar1 + 0x68) = 0;
    __rt_memclr_w(iVar1 + 0x6c,0x800);
    uVar2 += 1;
    *(undefined1 *)(iVar1 + 0x86c) = 0;
  } while (uVar2 < 8);
  return;
}
