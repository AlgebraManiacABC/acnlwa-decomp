/**
 * FUN_002b6a3c.c
 * Source line: 354157
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_002b6a3c(int param_1,int param_2)

{
  int in_r12;
  bool bVar1;
  
  bVar1 = *(int *)(param_2 + 0x18) != 0;
  if (bVar1) {
    in_r12 = *(int *)(param_1 + 0x1c);
  }
  if (!bVar1 || in_r12 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00569420(in_r12);
    return;
  }
  FUN_00568984(in_r12,param_2,*(int *)(param_1 + 0x10),0);
  return;
}
