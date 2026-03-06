/**
 * FUN_002a4c30.c
 * Source line: 345582
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_002a4c30(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 < 0x30) && (iVar1 = param_1 + param_2 * 4, *(int *)(iVar1 + 4) != 0)) {
    *(undefined4 *)(iVar1 + 4) = 0;
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + -1;
  }
  return;
}
