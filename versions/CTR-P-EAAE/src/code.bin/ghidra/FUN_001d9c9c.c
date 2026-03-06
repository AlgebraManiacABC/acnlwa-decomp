/**
 * FUN_001d9c9c.c
 * Source line: 241830
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_001d9c9c(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + 0x34) == '\0') {
    FUN_002a5fa8(param_1 + 0x74,param_1);
    FUN_0020a4cc(param_1,param_2,param_3);
    *(int *)(param_1 + 0x90) = param_1;
  }
  return;
}
