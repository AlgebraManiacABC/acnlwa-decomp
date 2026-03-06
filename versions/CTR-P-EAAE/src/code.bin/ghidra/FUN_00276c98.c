/**
 * FUN_00276c98.c
 * Source line: 321525
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00276c98(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  if ((*(char *)(param_1 + 0x34) == '\0') && (param_2 < 0x83)) {
    *(uint *)(param_1 + 0x74) = param_2 + 0x1000a96;
    FUN_0020a4cc(param_1,param_3,param_4);
    return;
  }
  return;
}
