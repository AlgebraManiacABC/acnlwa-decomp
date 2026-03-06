/**
 * FUN_004268d4.c
 * Source line: 590436
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_004268d4(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = &UNK_00900484;
  iVar1 = FUN_00426630(param_1 + 1,param_2 + 4);
  *(undefined2 *)(iVar1 + 8) = *(undefined2 *)(param_2 + 0xc);
  return;
}
