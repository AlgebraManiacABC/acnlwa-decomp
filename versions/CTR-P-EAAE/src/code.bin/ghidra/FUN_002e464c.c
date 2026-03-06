/**
 * FUN_002e464c.c
 * Source line: 380057
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002e464c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0050d408(&DAT_00a22020);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_0051ac04(&DAT_00a22020);
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
  return;
}
