/**
 * FUN_0011441c.c
 * Source line: 114435
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0011441c(void)

{
  int iVar1;
  
  iVar1 = FUN_0024ebc0();
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x168) = 1;
  }
  if (_DAT_0094e4b8 != 0) {
    *(undefined1 *)(_DAT_0094e4b8 + 0xa10) = 1;
  }
  FUN_00313a8c();
  iVar1 = FUN_00109c14();
  if (iVar1 != 0) {
    return 2;
  }
  return 3;
}
