/**
 * FUN_002e4524.c
 * Source line: 379974
 * Body lines: 7
 */
#include "../../../include/types.h"

bool FUN_002e4524(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0050d44c(&DAT_00a22020);
  if (iVar1 != 0) {
    FUN_0050d478(&DAT_00a22020);
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  return iVar1 != 0;
}
