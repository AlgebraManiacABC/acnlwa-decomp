/**
 * FUN_00383808.c
 * Source line: 489940
 * Body lines: 5
 */
#include "../../../include/types.h"

undefined4 FUN_00383808(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x50) = *param_2;
  *(undefined4 *)(param_1 + 0x10) = param_2[1];
  FUN_00357108(param_1 + 0x28,L"0.0.0.1");
  *(undefined2 *)(param_1 + 0x2e) = 0;
  return 1;
}
