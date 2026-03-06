/**
 * FUN_005cfa78.c
 * Source line: 881500
 * Body lines: 7
 */
#include "../../../include/types.h"

bool FUN_005cfa78(void)

{
  int iVar1;
  
  if (cRam009514c4 == -1) {
    iVar1 = FUN_0050d698(0);
    cRam009514c4 = iVar1 == 0;
    FUN_0050d8f0();
  }
  return cRam009514c4 == '\x01';
}
