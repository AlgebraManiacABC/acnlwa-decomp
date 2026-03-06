/**
 * FUN_0051ab9c.c
 * Source line: 760287
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 * FUN_0051ab9c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_001324a8();
  *puVar1 = &UNK_00903624;
  puVar1[3] = 0;
  FUN_0012f154();
  puVar1[6] = 0xfffffffd;
  puVar1[7] = 0xffffffff;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 0;
  return puVar1;
}
