/**
 * thunk_FUN_005833e4.c
 * Source line: 835044
 * Body lines: 14
 */
#include "../../../include/types.h"

void thunk_FUN_005833e4(void)

{
  int iVar1;
  
  iVar1 = DAT_0094d080;
  if (*(char *)(DAT_0094d080 + 0x78c) != '\x03') {
    if (*(char *)(DAT_0094d080 + 0x78c) == '\x02') {
      *(undefined1 *)(DAT_0094d080 + 0x78c) = 1;
    }
    return;
  }
  if (*(int *)(DAT_0094d080 + 0x788) != 0) {
    FUN_004c46ec();
  }
  *(undefined1 *)(iVar1 + 0x78c) = 4;
  *(undefined1 *)(iVar1 + 2000) = 1;
  return;
}
