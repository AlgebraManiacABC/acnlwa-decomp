/**
 * FUN_0058307c.c
 * Source line: 828532
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined1 FUN_0058307c(void)

{
  undefined1 uVar1;
  
  if (*(char *)(DAT_0094ccb8 + 0x10) == '\0') {
    uVar1 = 0;
  }
  else if (*(char *)(DAT_0094ccb8 + 0x10) == '\x02') {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined1 *)(DAT_0094ccb8 + 0x1ebe);
  }
  return uVar1;
}
