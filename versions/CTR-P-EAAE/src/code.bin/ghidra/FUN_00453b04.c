/**
 * FUN_00453b04.c
 * Source line: 618390
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00453b04(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00426f3c();
  *puVar1 = &UNK_00900dcc;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 15000;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *(undefined1 *)((int)puVar1 + 0x59) = 0;
  return;
}
