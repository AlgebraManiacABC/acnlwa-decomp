/**
 * FUN_00746cb0.c
 * Source line: 1102783
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00746cb0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  *(byte *)(*(int *)(param_3 + 0x48) + 0xb7) = *(byte *)(*(int *)(param_3 + 0x48) + 0xb7) & 0xfd | 2
  ;
  FUN_00150bc0(param_3 + 0x18b,param_2,0x10);
  *(int *)(param_3 + 0x178) = param_1;
  FUN_0013e7d8(*(int *)(param_1 + 0x174),*(int *)(param_1 + 0x174) + 4,param_3 + 0xc);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0x2c))(*(int **)(param_1 + 0x48),param_2,1);
  FUN_004b6d74(uVar1,*(undefined4 *)(param_3 + 0x48));
  return;
}
