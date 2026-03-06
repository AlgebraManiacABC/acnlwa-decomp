/**
 * FUN_0052bdec.c
 * Source line: 771034
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0052bdec(void)

{
  int iVar1;
  
  if (((DAT_009516ac != 0) && (*(char *)(DAT_009516ac + 0x18) == '\x02')) &&
     (iVar1 = (**(code **)(&UNK_0085e24c + (uint)*(byte *)(DAT_009516ac + 0x19) * 0x10))(),
     iVar1 != 0)) {
    *(undefined1 *)(DAT_009516ac + 0x18) = 3;
  }
  return;
}
