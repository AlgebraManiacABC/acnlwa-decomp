/**
 * FUN_006ca698.c
 * Source line: 1027312
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_006ca698(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (cRam009571f8 != '\0') {
    software_interrupt(WaitSynchronization1);
    if (iRam009571fc < 0) {
      FUN_0012f204();
    }
    uVar1 = 1;
    cRam009571f8 = '\0';
  }
  return uVar1;
}
