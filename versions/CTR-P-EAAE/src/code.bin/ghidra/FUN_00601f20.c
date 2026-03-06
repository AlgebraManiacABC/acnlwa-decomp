/**
 * FUN_00601f20.c
 * Source line: 918057
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00601f20(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x14) = 0;
    FUN_006e5f58(*(int *)(param_1 + 0x340) + 0x14);
    return;
  }
  return;
}
