/**
 * FUN_003da6fc.c
 * Source line: 551035
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_003da6fc(void)

{
  undefined4 uVar1;
  
  if (iRam00974f3c != 0) {
    FUN_003da078(0x974f40,2);
    uVar1 = FUN_003da570();
    software_interrupt(CloseHandle);
    iRam00974f3c = 0;
    return uVar1;
  }
  return 0xc8a18600;
}
