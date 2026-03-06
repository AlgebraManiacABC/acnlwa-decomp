/**
 * FUN_0041fc38.c
 * Source line: 586868
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0041fc38(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00426f3c();
  puVar1[0x10] = 0;
  *puVar1 = &UNK_00900010;
  *(undefined1 *)(puVar1 + 0x11) = 10;
  *(undefined1 *)((int)puVar1 + 0x45) = 0;
  *(undefined1 *)((int)puVar1 + 0x46) = 0;
  return;
}
