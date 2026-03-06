/**
 * FUN_005837e4.c
 * Source line: 829486
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005837e4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0094d080;
  if (*(char *)(DAT_0094d080 + 0xc5c) != '\0') {
    *(undefined4 *)(DAT_0094d080 + 0xcb8) = 3;
    FUN_001d67b4(iVar1 + 0x754);
    FUN_001b0ad4(iVar1 + 0x860,*(undefined1 *)(iVar1 + 0xcb4),param_1);
    FUN_001d8760(iVar1 + 0xb00);
    FUN_002798d4(iVar1 + 0x134);
    *(undefined1 *)(iVar1 + 0xcb5) = *(undefined1 *)(iVar1 + 0xcb4);
    *(undefined1 *)(iVar1 + 0xcb4) = (char)param_1;
  }
  return;
}
