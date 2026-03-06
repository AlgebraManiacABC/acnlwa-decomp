/**
 * FUN_006b16c0.c
 * Source line: 1009934
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006b16c0(int param_1)

{
  if (*(int *)(param_1 + 0x118) != 0) {
    FUN_0034c790();
    FUN_0013a458(*(undefined4 *)(param_1 + 0x118));
    (**(code **)(*piRam00952ca8 + 0x1c))(piRam00952ca8,*(undefined4 *)(param_1 + 0x11c));
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  return;
}
