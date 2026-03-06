/**
 * FUN_001cd934.c
 * Source line: 234446
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_001cd934(void)

{
  int iVar1;
  
  if ((_DAT_00aaf14c != 0) && ((int)((uint)*(byte *)(_DAT_00aaf14c + 0x5701) << 0x1e) < 0)) {
    iVar1 = FUN_002fb378();
    if (0xe < (int)*(char *)(iVar1 + 7) - 7U) {
      FUN_002fae84();
      return;
    }
  }
  FUN_002fae84();
  return;
}
