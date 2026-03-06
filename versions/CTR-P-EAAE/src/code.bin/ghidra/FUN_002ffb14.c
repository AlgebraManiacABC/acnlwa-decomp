/**
 * FUN_002ffb14.c
 * Source line: 397870
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_002ffb14(int param_1)

{
  uint uVar1;
  int iVar2;
  
  for (uVar1 = 0;
      ((uVar1 < DAT_00981fdc && (iVar2 = *(int *)(DAT_00981fd8 + uVar1 * 4), iVar2 != 0)) &&
      (iVar2 != param_1)); uVar1 += 1) {
  }
  if (*(int *)(DAT_00981fd8 + uVar1 * 4) == 0) {
    uVar1 = DAT_00981fdc;
  }
  return uVar1;
}
