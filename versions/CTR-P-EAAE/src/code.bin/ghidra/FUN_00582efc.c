/**
 * FUN_00582efc.c
 * Source line: 828394
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_00582efc(void)

{
  int iVar1;
  
  iVar1 = DAT_0094d080;
  if (DAT_0094d080 == 0) {
    return 0;
  }
  if (*(char *)(DAT_0094d080 + 0xc5c) != '\0') {
    *(undefined4 *)(DAT_0094d080 + 0xcb8) = 2;
    FUN_001d7ee0(iVar1 + 0xb00);
    return iVar1 + 0x134;
  }
  return 0;
}
