/**
 * FUN_0050cc2c.c
 * Source line: 750756
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0050cc2c(int param_1)

{
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 400) = 0;
  iVar2 = 0;
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  do {
    *(undefined4 *)(param_1 + iVar2 * 4) = 0;
    uVar1 += 2;
    *(undefined4 *)(param_1 + (iVar2 + 1) * 4) = 0;
    iVar2 += 2;
  } while (uVar1 < 100);
  return;
}
