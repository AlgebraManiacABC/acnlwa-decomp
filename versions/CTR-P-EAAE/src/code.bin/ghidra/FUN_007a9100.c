/**
 * FUN_007a9100.c
 * Source line: 1148665
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_007a9100(int param_1)

{
  uint *puVar1;
  
  puVar1 = puRam0097d784;
  if (*(char *)((int)puRam0097d784 + param_1 * 0x18 + 0x46d) == '\0') {
    *(undefined1 *)((int)puRam0097d784 + param_1 * 0x18 + 0x46d) = 1;
    *puVar1 = *puVar1 | 0x40;
  }
  return;
}
