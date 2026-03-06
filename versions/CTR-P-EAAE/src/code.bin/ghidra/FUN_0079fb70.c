/**
 * FUN_0079fb70.c
 * Source line: 1142848
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0079fb70(void)

{
  char cVar1;
  
  if (iRam00adf95c != 0) {
    cVar1 = *(char *)(iRam00adf95c + 0x3d);
    *(undefined1 *)(iRam00adf95c + 0x3d) = 1;
    FUN_001279cc();
    if (cVar1 == '\0') {
      *(undefined1 *)(iRam00adf95c + 0x3d) = 0;
    }
  }
  return;
}
