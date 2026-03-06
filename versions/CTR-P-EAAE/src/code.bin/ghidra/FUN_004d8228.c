/**
 * FUN_004d8228.c
 * Source line: 720140
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004d8228(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004d8ca4();
  puVar1[1] = 0;
  *puVar1 = &PTR_LAB_0090260c;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined2 *)(puVar1 + 5) = 0;
  *(undefined2 *)((int)puVar1 + 0x16) = 0xffff;
  puVar1[4] = 6;
  return;
}
