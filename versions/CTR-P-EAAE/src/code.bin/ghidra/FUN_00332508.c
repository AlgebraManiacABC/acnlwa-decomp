/**
 * FUN_00332508.c
 * Source line: 434888
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00332508(int param_1)

{
  if (*(int *)(param_1 + 0x90) != 0) {
    if (*(int *)(param_1 + 0x94) != 0) {
      FUN_00136e58(*(int *)(param_1 + 0x94),0);
    }
    *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  return;
}
