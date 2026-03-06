/**
 * FUN_00426f3c.c
 * Source line: 590870
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 * FUN_00426f3c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00428584();
  *puVar1 = &UNK_009004d8;
  puVar1[8] = &UNK_009004c4;
  puVar1[0xb] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return puVar1;
}
