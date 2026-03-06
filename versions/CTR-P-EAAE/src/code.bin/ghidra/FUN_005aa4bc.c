/**
 * FUN_005aa4bc.c
 * Source line: 856830
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_005aa4bc(int param_1,uint param_2)

{
  *(uint *)(param_1 + 4) = param_2 & 3 | *(uint *)(param_1 + 4) & 0xfffffffc;
  return;
}
