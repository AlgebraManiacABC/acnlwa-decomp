/**
 * FUN_004c8b24.c
 * Source line: 708380
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_004c8b24(int param_1,undefined4 *param_2)

{
  if (*(undefined4 **)(param_1 + 0x170) == NULL) {
    *(undefined4 **)(param_1 + 0x16c) = param_2;
  }
  else {
    **(undefined4 **)(param_1 + 0x170) = param_2;
  }
  *(undefined4 **)(param_1 + 0x170) = param_2;
  *param_2 = 0;
  return *(undefined4 *)(param_1 + 0x174);
}
