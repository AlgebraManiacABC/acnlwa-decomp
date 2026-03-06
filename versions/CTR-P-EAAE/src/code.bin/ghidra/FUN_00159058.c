/**
 * FUN_00159058.c
 * Source line: 171771
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00159058(int param_1,int *param_2,undefined4 *param_3)

{
  *param_2 = param_1 + 8;
  *param_3 = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x98) = 1;
  return;
}
