/**
 * FUN_004125dc.c
 * Source line: 578870
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_004125dc(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00426650(param_1 + 8);
  puVar1[-1] = 0;
  puVar1[-2] = 0xffffffff;
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 1) = 0;
  return;
}
