/**
 * FUN_0043fe98.c
 * Source line: 606077
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_0043fe98(int *param_1)

{
  *(int **)(*(int *)(iRam0097d428 + 0x4c) + 0x14) = param_1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0xfd;
  *(undefined1 *)((int)param_1 + 0x7b) = 0;
  (**(code **)(*param_1 + 8))(param_1,1);
  param_1[9] = (int)&UNK_0043f258;
  param_1[10] = 0;
  param_1[0xb] = (int)"ProcessJoinRequestJob::InitialStep";
  return 1;
}
