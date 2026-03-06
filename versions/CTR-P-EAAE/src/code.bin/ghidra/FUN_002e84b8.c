/**
 * FUN_002e84b8.c
 * Source line: 382549
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_002e84b8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5)

{
  if (*(char *)(param_2 + 0x34) == '\0') {
    *(undefined4 *)(param_2 + 0x3c) = 4;
    FUN_0020a4cc(param_2);
    *(undefined2 *)(param_2 + 0x5c) = param_5;
    *(undefined4 *)(param_2 + 0x60) = param_1;
  }
  return;
}
