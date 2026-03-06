/**
 * FUN_0050cde4.c
 * Source line: 750862
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0050cde4(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = iRam009535e0;
  if (*(char *)(iRam009535e0 + 0x11) != '\0') {
    uVar2 = *(uint *)(iRam009535e0 + 0xc);
    software_interrupt(WaitSynchronization1);
    if ((int)uVar2 < 0) {
      FUN_0012f204();
    }
    if ((uVar2 & 0x3ff) == 0x3fe) {
      return 1;
    }
    *(undefined1 *)(iVar1 + 0x11) = 0;
  }
  return 0;
}
