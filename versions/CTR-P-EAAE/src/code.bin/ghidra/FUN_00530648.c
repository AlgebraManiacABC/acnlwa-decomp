/**
 * FUN_00530648.c
 * Source line: 774308
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_00530648(void)

{
  int iVar1;
  
  iVar1 = FUN_005673c8();
  __rt_memclr_w(iVar1 + 8,0x264);
  iVar1 = FUN_005673c8(iVar1 + 8);
  iVar1 = FUN_00301d0c(iVar1 + 8,&LAB_005b1c18,0x11c,2);
  iVar1 = FUN_00125e08(iVar1 + 0x238);
  iVar1 = FUN_00125e08(iVar1 + 0xc);
  iVar1 = FUN_00125e08(iVar1 + 0xc);
  iVar1 = FUN_004f147c(iVar1 + 0xc);
  *(undefined1 *)(iVar1 + 0xc) = 0;
  iVar1 = FUN_005b1a1c(iVar1 + 0x10);
  iVar1 = FUN_005b1a1c(iVar1 + 8);
  return iVar1 + -0x284;
}
