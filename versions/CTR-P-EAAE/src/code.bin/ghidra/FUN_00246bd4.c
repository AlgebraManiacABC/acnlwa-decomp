/**
 * FUN_00246bd4.c
 * Source line: 297114
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00246bd4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0020af18();
  puVar1[0x11] = 0xffffffff;
  *puVar1 = &UNK_008ee798;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((int)puVar1 + 0x49) = 0;
  puVar1[0x13] = 0x44fa0000;
  puVar1[0x14] = 0x44fa0000;
  puVar1[0x15] = 0x44fa0000;
  return;
}
