/**
 * FUN_00292f8c.c
 * Source line: 336288
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00292f8c(int param_1)

{
  *(byte *)(*(int *)(param_1 + 0x6e4) + 0xb7) =
       *(byte *)(*(int *)(param_1 + 0x6e4) + 0xb7) & 0xfe | 1;
  uRam0095070a = 1;
  FUN_004b9b64(param_1 + 0x1b8);
  FUN_005697e0(0,param_1 + 0x574);
  *(undefined1 *)(param_1 + 0x2da) = 1;
  return;
}
