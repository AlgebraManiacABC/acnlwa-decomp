/**
 * FUN_001ab014.c
 * Source line: 215147
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_001ab014(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[8];
  if (iVar1 != 0) {
    param_1[3] = *(undefined4 *)(iVar1 + 0xc);
    param_1[4] = *(undefined4 *)(iVar1 + 0x1c);
    param_1[5] = *(undefined4 *)(iVar1 + 0x2c);
  }
  iVar1 = param_1[7];
  if (iVar1 != 0) {
    *param_1 = *(undefined4 *)(iVar1 + 0xc);
    param_1[1] = *(undefined4 *)(iVar1 + 0x1c);
    param_1[2] = *(undefined4 *)(iVar1 + 0x2c);
  }
  return;
}
