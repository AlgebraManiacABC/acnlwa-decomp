/**
 * FUN_001f4dc0.c
 * Source line: 256607
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_001f4dc0(int *param_1)

{
  if (*(char *)((int)param_1 + 199) != '\0') {
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    *(undefined2 *)(param_1 + 0x21) = 0;
    *(undefined2 *)((int)param_1 + 0x86) = 0;
    *(undefined2 *)(param_1 + 0x22) = 0;
  }
  (**(code **)(*param_1 + 0x60))(param_1);
  (**(code **)(*param_1 + 100))(param_1);
  (**(code **)(*param_1 + 0x50))(param_1);
  return 2;
}
