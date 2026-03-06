/**
 * FUN_00423d90.c
 * Source line: 588632
 * Body lines: 6
 */
#include "../../../include/types.h"

bool FUN_00423d90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00414350();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 4) + 0xc);
  }
  return iVar1 != 0;
}
