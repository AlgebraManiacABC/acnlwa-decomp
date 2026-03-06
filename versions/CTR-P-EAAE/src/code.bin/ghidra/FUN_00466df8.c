/**
 * FUN_00466df8.c
 * Source line: 633151
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00466df8(void)

{
  FUN_00135748(0xaed84c);
  if (iRam00aed858 < 1) {
    FUN_001357ec(0xaed84c);
    return 0xd8a0bbf8;
  }
  iRam00aed858 += -1;
  if ((iRam00aed858 < 1) && (iRam00aed85c != 0)) {
    software_interrupt(CloseHandle);
    iRam00aed85c = 0;
  }
  FUN_001357ec(0xaed84c);
  return 0;
}
