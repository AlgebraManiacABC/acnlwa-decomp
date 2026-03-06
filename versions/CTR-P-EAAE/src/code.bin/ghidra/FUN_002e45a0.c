/**
 * FUN_002e45a0.c
 * Source line: 380012
 * Body lines: 12
 */
#include "../../../include/types.h"

bool FUN_002e45a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00746f8c(&DAT_00a22020);
  if (iVar1 == 0) {
    iVar1 = FUN_0050d420(&DAT_00a22020);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0x57) = 0;
    }
    return iVar1 != 0;
  }
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined1 *)(param_1 + 0x54) = 4;
  return true;
}
