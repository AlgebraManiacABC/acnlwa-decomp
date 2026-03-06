/**
 * FUN_00292f2c.c
 * Source line: 336274
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00292f2c(int param_1)

{
  *(byte *)(*(int *)(param_1 + 0x6e0) + 0xb7) =
       *(byte *)(*(int *)(param_1 + 0x6e0) + 0xb7) & 0xfe | 1;
  uRam0095070a = 1;
  FUN_00568630(param_1 + 0x6c,param_1 + 0x54c,*(undefined4 *)(param_1 + 0x6f0),0);
  FUN_005697e0(0,param_1 + 0x54c);
  *(undefined1 *)(param_1 + 0x18e) = 1;
  return;
}
