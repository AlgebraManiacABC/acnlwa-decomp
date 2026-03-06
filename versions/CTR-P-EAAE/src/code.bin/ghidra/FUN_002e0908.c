/**
 * FUN_002e0908.c
 * Source line: 377916
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002e0908(int param_1)

{
  if (*(char *)(param_1 + 0x516) == '\0') {
    FUN_005e2e50(param_1 + 0x43c,param_1 + 0x404);
    FUN_005e2f94(param_1 + 0x43c);
  }
  if (*(char *)(param_1 + 0x517) == '\0') {
    FUN_002b6d20(param_1,0);
  }
  FUN_004b9b64(param_1 + 0x238,param_1 + 900);
  FUN_005697e0(0,param_1 + 900);
  *(code **)(param_1 + 0x50c) = FUN_002e01ec;
  *(undefined4 *)(param_1 + 0x510) = 0;
  return;
}
