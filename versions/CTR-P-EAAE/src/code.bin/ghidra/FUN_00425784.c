/**
 * FUN_00425784.c
 * Source line: 589353
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 * FUN_00425784(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00426f3c();
  *puVar1 = &UNK_00900430;
  puVar1[0x10] = 0;
  *(undefined1 *)(puVar1 + 0x11) = 0xff;
  puVar1[0x12] = 200;
  *(undefined2 *)(puVar1 + 0x13) = 0x14;
  puVar1[0x14] = 5000;
  puVar1[0x15] = 0;
  return puVar1;
}
