/**
 * FUN_0052ccfc.c
 * Source line: 771832
 * Body lines: 9
 */
#include "../../../include/types.h"

bool FUN_0052ccfc(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = iRam009516b4 == 0;
  iVar1 = param_1;
  if (!bVar2) {
    iVar1 = iRam009516b4;
  }
  iRam009516b4 = iVar1;
  return bVar2;
}
