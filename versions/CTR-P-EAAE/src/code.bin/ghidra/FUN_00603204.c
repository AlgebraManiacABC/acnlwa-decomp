/**
 * FUN_00603204.c
 * Source line: 919000
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00603204(int param_1)

{
  FUN_006e5e94(*(int *)(param_1 + 0x340) + 0x14,0);
  (**(code **)(**(int **)(param_1 + 0x34c) + 8))
            (*(int **)(param_1 + 0x34c),*(undefined4 *)(param_1 + 0x354),
             *(undefined4 *)(param_1 + 0x364),*(undefined4 *)(param_1 + 0x348));
  *(undefined4 *)(param_1 + 0x24) = 0;
  if ((*(char *)(param_1 + 0x378) != '\0') && (-1 < *(int *)(param_1 + 0x374))) {
    *(int *)(param_1 + 0x370) = *(int *)(param_1 + 0x374);
  }
  return;
}
