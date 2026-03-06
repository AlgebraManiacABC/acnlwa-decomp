/**
 * FUN_005a36b8.c
 * Source line: 851863
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005a36b8(int *param_1,int param_2,int param_3)

{
  sbyte sVar1;
  
  sVar1 = *(sbyte *)(param_1[0x1b] * 0x68 + param_2 * 8 + 0xa146c2);
  *(uint *)(*param_1 + 0x29c) = param_3 << sVar1 | *(uint *)(*param_1 + 0x29c) & ~(1 << sVar1);
  return;
}
