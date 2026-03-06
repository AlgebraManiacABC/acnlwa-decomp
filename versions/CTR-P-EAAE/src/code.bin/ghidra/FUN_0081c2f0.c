/**
 * FUN_0081c2f0.c
 * Source line: 1227851
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0081c2f0(int param_1)

{
  int iVar1;
  
  FUN_005cd270(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined **)(param_1 + 0x48) = &UNK_001e5810;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x2a000800;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = FUN_00304640(param_1 + 0x28);
  if (iVar1 != 0) {
    FUN_0081c0a0(param_1);
  }
  return;
}
