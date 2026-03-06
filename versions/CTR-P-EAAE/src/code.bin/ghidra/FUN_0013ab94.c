/**
 * FUN_0013ab94.c
 * Source line: 147563
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0013ab94(int *param_1)

{
  *(uint *)(*param_1 + 0x2c) = *(uint *)(*param_1 + 0x2c) & 0xfffffff7;
  if (*(int *)(*param_1 + 0x60) != 0) {
    (**(code **)(**(int **)(*param_1 + 0x80) + 0xc))();
    *(undefined4 *)(*param_1 + 0x60) = 0;
    *(undefined4 *)(*param_1 + 100) = 0;
    if (*(int *)(*param_1 + 0x68) != 0) {
      *(undefined4 *)(*param_1 + 0x68) = 0;
      *(undefined4 *)(*param_1 + 0x6c) = 0;
    }
  }
  return;
}
