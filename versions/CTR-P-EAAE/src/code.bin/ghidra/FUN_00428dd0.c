/**
 * FUN_00428dd0.c
 * Source line: 592564
 * Body lines: 4
 */
#include "../../../include/types.h"

undefined4 * FUN_00428dd0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &UNK_00900560;
  FUN_00150bc0(param_1 + 1,param_2,0x7f);
  *(undefined1 *)((int)param_1 + 0x83) = 0;
  return param_1;
}
