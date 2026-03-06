/**
 * FUN_001204d4.c
 * Source line: 123237
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 * FUN_001204d4(void)

{
  puRam009752e8 = (undefined4 *)FUN_001255d8();
  *puRam009752e8 = &UNK_00905740;
  puRam009752e8[0x52] = 0;
  puRam009752e8[0x53] = 0;
  software_interrupt(GetSystemTick);
  puRam009752e8[0x54] = puRam009752e8;
  puRam009752e8[0x55] = &UNK_00905740;
  *(undefined1 *)(puRam009752e8 + 0x56) = 0;
  return puRam009752e8;
}
