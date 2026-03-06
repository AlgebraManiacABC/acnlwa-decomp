/**
 * FUN_006d53a0.c
 * Source line: 1033997
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_006d53a0(void)

{
  int iVar1;
  
  iVar1 = FUN_006d40d4(DAT_0094fd3c,0x800);
  if ((iVar1 != 0) || (iVar1 = FUN_006d40d4(DAT_0094fd3c,0x10000), iVar1 != 0)) {
    *(undefined1 *)(DAT_0094fd3c + 0x1fc) = 0;
  }
  return;
}
