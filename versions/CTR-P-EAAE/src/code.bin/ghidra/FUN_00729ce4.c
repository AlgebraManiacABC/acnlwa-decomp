/**
 * FUN_00729ce4.c
 * Source line: 1082814
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00729ce4(undefined4 *param_1,int param_2)

{
  *param_1 = &UNK_008fb770;
  param_1[1] = &UNK_008fe9d0;
  FUN_003548f0(param_1 + 2,*(undefined4 *)(param_2 + 0xd4));
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0xd8);
  param_1[4] = &UNK_008fe9d0;
  FUN_003548f0(param_1 + 5,*(undefined4 *)(param_2 + 0xe0));
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 0xe4);
  *(undefined1 *)((int)param_1 + 0x1a) = *(undefined1 *)(param_2 + 0xe6);
  *(undefined1 *)((int)param_1 + 0x1b) = *(undefined1 *)(param_2 + 0xe7);
  param_1[7] = *(undefined4 *)(param_2 + 0xe8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0xec);
  return;
}
