/**
 * FUN_0033e8fc.c
 * Source line: 438821
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0033e8fc(int param_1)

{
  if (**(char **)(param_1 + 0x108) != '\0') {
    (**(code **)(*(int *)(param_1 + 0x104) + 8))(param_1 + 0x104);
    FUN_005dd51c(param_1,*(undefined4 *)(param_1 + 0x108));
    if (*(int *)(param_1 + 0xf8) != 0) {
      FUN_005dd5b8(param_1,*(undefined4 *)(param_1 + 0x130));
      return;
    }
  }
  return;
}
