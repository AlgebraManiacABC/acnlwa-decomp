/**
 * FUN_00750d40.c
 * Source line: 1107211
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00750d40(int param_1,undefined4 *param_2)

{
  if (param_2 != NULL) {
    *param_2 = *(undefined4 *)(param_1 + 0x554);
    param_2[1] = *(undefined4 *)(param_1 + 0x564);
    param_2[2] = *(undefined4 *)(param_1 + 0x574);
  }
  return;
}
