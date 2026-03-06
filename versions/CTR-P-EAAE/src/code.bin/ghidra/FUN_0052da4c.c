/**
 * FUN_0052da4c.c
 * Source line: 772331
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0052da4c(void)

{
  int iVar1;
  
  if (((DAT_009516ac != 0) && (*(char *)(DAT_009516ac + 0x18) == '\x03')) &&
     (iVar1 = (**(code **)(&UNK_0085e250 + (uint)*(byte *)(DAT_009516ac + 0x19) * 0x10))(),
     iVar1 != 0)) {
    *(undefined1 *)(DAT_009516ac + 0x18) = 4;
  }
  return;
}
