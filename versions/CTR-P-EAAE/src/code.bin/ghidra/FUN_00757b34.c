/**
 * FUN_00757b34.c
 * Source line: 1113137
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00757b34(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *param_1 = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = 0;
  param_1[2] = uVar1;
  uVar1 = FUN_006c6640(param_1,0);
  param_1[1] = uVar1;
  return;
}
