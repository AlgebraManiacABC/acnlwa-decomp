/**
 * FUN_0028613c.c
 * Source line: 329698
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0028613c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = param_1 + iVar1 * 4;
    FUN_005e2e04(*(undefined4 *)(iVar2 + 0x408));
    if (*(int *)(iVar2 + 0x408) != 0) {
      FUN_005e3194();
      FUN_002ffb64();
    }
    iVar1 += 1;
    *(undefined4 *)(iVar2 + 0x408) = 0;
  } while (iVar1 < 10);
  FUN_0022bf34(param_1 + 0x5e0);
          // WARNING: Subroutine does not return
  FUN_001323b4(param_1 + 0x4c);
}
