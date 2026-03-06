/**
 * FUN_0018d7f4.c
 * Source line: 203084
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0018d7f4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_006d39a8();
  if (iVar1 == 0) {
    if (DAT_0094fd2b != '\0') {
      FUN_002fb94c();
      return;
    }
    *(undefined1 *)(param_1 + 0xe2) = 2;
  }
  return;
}
