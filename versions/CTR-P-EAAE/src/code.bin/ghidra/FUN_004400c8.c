/**
 * FUN_004400c8.c
 * Source line: 606179
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_004400c8(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  *param_1 = &UNK_009009fc;
  do {
    iVar2 = param_1[uVar1 + 0x17];
    if (iVar2 != 0) {
      FUN_005380a8(iVar2);
      FUN_0053814c(iVar2);
    }
    uVar1 += 1;
  } while (uVar1 < 3);
  param_1[0x1a] = &UNK_00900484;
  FUN_00426fb0(param_1);
  return;
}
