/**
 * FUN_007792e0.c
 * Source line: 1135755
 * Body lines: 5
 */
#include "../../../include/types.h"

undefined4 FUN_007792e0(int *param_1)

{
  undefined4 uVar1;
  
  param_1 = (int *)(*(int *)(*param_1 + -0x24) + (int)param_1);
  uVar1 = FUN_0025191c(_DAT_0094f268,(&UNK_0086a2e2)[(uint)*(byte *)((int)param_1 + 0xc9) * 0x4c]);
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0xc) = uVar1;
  return 1;
}
