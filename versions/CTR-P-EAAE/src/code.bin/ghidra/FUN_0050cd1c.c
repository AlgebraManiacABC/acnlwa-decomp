/**
 * FUN_0050cd1c.c
 * Source line: 750804
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0050cd1c(void)

{
  int iVar1;
  char cVar2;
  
  iVar1 = iRam009535e0;
  FUN_00135748(iRam009535e0);
  cVar2 = *(char *)(iVar1 + 0x10) + -1;
  *(char *)(iVar1 + 0x10) = cVar2;
  if (cVar2 == '\0') {
    FUN_003452f0();
    FUN_00345820();
    *(undefined1 *)(iVar1 + 0x11) = 0;
  }
  FUN_001357ec(iVar1);
  return;
}
