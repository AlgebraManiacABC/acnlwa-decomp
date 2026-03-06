/**
 * FUN_005f4628.c
 * Source line: 905506
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005f4628(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if ((*(char *)(param_1 + 0x1e7) == '\0') &&
     (FUN_005d5430(param_1), *(char *)(param_1 + 0x1e5) != '\0')) {
    *(undefined1 *)(param_1 + 0x1e4) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x1c);
  bVar2 = cVar1 == '\0';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x1e7);
  }
  if (!bVar2 || cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x29) = 3;
  }
  return;
}
