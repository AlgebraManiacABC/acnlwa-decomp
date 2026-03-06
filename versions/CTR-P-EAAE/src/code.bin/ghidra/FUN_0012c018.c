/**
 * FUN_0012c018.c
 * Source line: 132885
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0012c018(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_001318c0();
  *puVar1 = &UNK_00904cf0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  puVar1[3] = 0x3f800000;
  return;
}
