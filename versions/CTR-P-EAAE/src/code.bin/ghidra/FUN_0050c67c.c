/**
 * FUN_0050c67c.c
 * Source line: 750430
 * Body lines: 10
 */
#include "../../../include/types.h"

bool FUN_0050c67c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) == 2) {
    FUN_0050c5b4(param_1,0);
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 1 || iVar1 == 2) {
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10) = *(undefined4 *)(param_1 + 0xc);
  }
  FUN_004daf98(param_1);
  return iVar1 == 1 || iVar1 == 2;
}
