/**
 * FUN_00583d7c.c
 * Source line: 830245
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00583d7c(void)

{
  if (*(char *)(DAT_0094cd08 + 0x15) == '\x01') {
    FUN_0070ecd4(DAT_0094d004,*(byte *)(DAT_0094cd08 + 0x1c) & 0x7f);
    return;
  }
  return;
}
