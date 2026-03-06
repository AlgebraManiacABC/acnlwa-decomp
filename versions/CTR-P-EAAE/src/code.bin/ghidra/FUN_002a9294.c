/**
 * FUN_002a9294.c
 * Source line: 347824
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_002a9294(int param_1,undefined4 param_2)

{
  if (((int)((uint)*(byte *)(param_1 + 0x8a) << 0x1e) < 0) && (*(char *)(param_1 + 0x59c) == '\0'))
  {
    *(undefined4 *)(param_1 + 0x660) = param_2;
    FUN_002a93e8(param_1,1);
    return;
  }
  return;
}
