/**
 * FUN_0012f134.c
 * Source line: 135753
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0012f134(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  nn::os::SimpleLock::Initialize((SimpleLock *)(param_1 + 4));
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}
