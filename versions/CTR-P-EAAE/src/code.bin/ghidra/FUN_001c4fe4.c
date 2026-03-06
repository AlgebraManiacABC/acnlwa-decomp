/**
 * FUN_001c4fe4.c
 * Source line: 230554
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_001c4fe4(int *param_1)

{
  (**(code **)(*param_1 + 0x44))(param_1);
  param_1[0x25e] = param_1[0x271];
  FUN_00297f04(param_1 + 0x89,param_1[0x271],0);
  *(byte *)(param_1[0x26b] + 0xb7) =
       param_1[0x270] + -1 <= param_1[0x271] | *(byte *)(param_1[0x26b] + 0xb7) & 0xfe;
  (**(code **)(*param_1 + 0x38))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  if ((float)param_1[0x24d] != 0.0) {
    *(undefined1 *)((int)param_1 + 0x14e) = 1;
  }
  return;
}
