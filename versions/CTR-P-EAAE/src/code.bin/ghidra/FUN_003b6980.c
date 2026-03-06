/**
 * FUN_003b6980.c
 * Source line: 525746
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_003b6980(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x3c) + 8))
            (*(int **)(param_1 + 0x3c),param_1 + 0x58,*(undefined4 *)(param_1 + 0x40),
             *(undefined4 *)(param_1 + 0x84));
  if (*(char *)(param_1 + 0x6c) != '\0') {
    FUN_003cbfa4(param_1,*(undefined4 *)(param_1 + 0x74));
    return;
  }
  FUN_003cc040(param_1);
  return;
}
