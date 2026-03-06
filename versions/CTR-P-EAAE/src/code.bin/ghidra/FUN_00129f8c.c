/**
 * FUN_00129f8c.c
 * Source line: 131260
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00129f8c(void)

{
  int iVar1;
  
  iVar1 = iRam0097d8bc;
  FUN_00135748();
  if (*(char *)(iVar1 + 0x76) != '\x02') {
    *(undefined1 *)(iVar1 + 0x76) = 1;
    FUN_001357ec(iVar1);
    FUN_0012ef20(iVar1 + 100);
    return;
  }
  *(undefined1 *)(iVar1 + 0x76) = 0;
  FUN_001357ec(iVar1);
  return;
}
