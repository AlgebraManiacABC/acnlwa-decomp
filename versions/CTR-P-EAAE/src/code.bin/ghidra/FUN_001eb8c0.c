/**
 * FUN_001eb8c0.c
 * Source line: 252168
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_001eb8c0(int param_1)

{
  FUN_0027d490();
  *(undefined4 *)(param_1 + 0x40) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0x1e;
  FUN_0027d790(param_1,*(undefined4 *)(param_1 + 400));
  return;
}
