/**
 * FUN_00603978.c
 * Source line: 919407
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00603978(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x364) + 0xac))();
  *(undefined1 *)(*(int *)(param_1 + 0x348) + 0xd2) = 0;
  *(undefined1 *)(param_1 + 5) = 6;
  FUN_00602a90(param_1);
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x28) = 5;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffe;
  *(undefined1 *)(*(int *)(param_1 + 0x358) + 5) = 0;
  return;
}
