/**
 * FUN_0058cbd4.c
 * Source line: 836854
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0058cbd4(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = iRam0094d090;
  FUN_0032c654(iRam0094d090 + 0x63c);
  if ((*(char *)(iVar1 + 0x25) != '\x02') && (uVar2 = FUN_00354334(2), (uVar2 & 0x80000000) == 0)) {
    *(undefined1 *)(iVar1 + 0x25) = 2;
  }
  *(undefined1 *)(iVar1 + 0x15) = 2;
  return;
}
