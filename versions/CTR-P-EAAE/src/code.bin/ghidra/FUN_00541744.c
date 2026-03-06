/**
 * FUN_00541744.c
 * Source line: 785524
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00541744(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0053df24();
  *puVar1 = &UNK_009042f0;
  *(undefined1 *)(puVar1 + 0x4d) = 2;
  puVar1[0x40] = 0xffffffff;
  puVar1[0x41] = 0xffffffff;
  return;
}
