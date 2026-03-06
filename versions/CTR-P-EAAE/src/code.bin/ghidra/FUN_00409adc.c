/**
 * FUN_00409adc.c
 * Source line: 575160
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00409adc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00437634();
  puVar1[0x3b] = 0;
  *puVar1 = &UNK_008ff47c;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  puVar1[0x41] = 0;
  puVar1[0x42] = 0;
  puVar1[0x43] = 0;
  *(undefined1 *)((int)puVar1 + 0x125) = 0;
  return;
}
