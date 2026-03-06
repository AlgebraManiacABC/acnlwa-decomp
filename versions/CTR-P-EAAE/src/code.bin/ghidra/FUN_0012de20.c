/**
 * FUN_0012de20.c
 * Source line: 134664
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0012de20(int param_1,int param_2)

{
  *(uint *)(*(int *)(param_1 + 0x34) + 8) =
       ((*(int *)(param_2 + 4) + *(int *)(param_2 + 8)) - *(int *)(param_1 + 0x34)) - 0x18U >> 3;
  FUN_00136084(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 4;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}
