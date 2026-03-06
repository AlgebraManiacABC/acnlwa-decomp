/**
 * FUN_004c4810.c
 * Source line: 705104
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_004c4810(int param_1,int param_2)

{
  FUN_001408d4(param_1 + 0xc,param_2 + 0x108);
  FUN_001408d4(param_1,param_2 + 0x100);
  *(undefined4 *)(param_2 + 0x10) = 0;
  return;
}
