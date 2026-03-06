/**
 * FUN_001637dc.c
 * Source line: 179205
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_001637dc(void)

{
  int iVar1;
  
  FUN_00163928();
  iVar1 = FUN_0015dbec(0xae5730,0xae574c);
  if (iVar1 != 0) {
    uRam00ae5714 = uRam00ae5734;
    return 1;
  }
  FUN_00163928();
  if (iRam00975c88 != 0) {
    FUN_00160dc8();
    iRam00975c88 = 0;
  }
  return 0;
}
