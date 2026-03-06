/**
 * FUN_006b13bc.c
 * Source line: 1009781
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_006b13bc(int param_1,undefined4 *param_2)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x20) = param_2[1];
  *(undefined4 *)(param_1 + 0x24) = param_2[2];
  return;
}
