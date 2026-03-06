/**
 * FUN_0041f184.c
 * Source line: 586621
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 * FUN_0041f184(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0041fcc8();
  *puVar1 = &UNK_008fffa8;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *(undefined1 *)((int)puVar1 + 0x2d) = 0;
  puVar1[0xc] = 0;
  puVar1[0x4d] = 0;
  *(undefined1 *)(puVar1 + 0x4e) = 0;
  puVar1[0x81] = 0;
  __rt_memclr_w(puVar1 + 0xd,0xff);
  __rt_memclr((undefined4 *)((int)puVar1 + 0x139),200);
  return puVar1;
}
