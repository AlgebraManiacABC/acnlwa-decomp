/**
 * FUN_00540c3c.c
 * Source line: 785105
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00540c3c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0053f6a8();
  puVar1[1] = 1;
  *puVar1 = &UNK_009041b0;
  puVar1[3] = 0;
  puVar1[2] = 1;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  return;
}
