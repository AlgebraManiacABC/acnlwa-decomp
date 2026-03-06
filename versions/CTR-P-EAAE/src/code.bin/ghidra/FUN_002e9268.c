/**
 * FUN_002e9268.c
 * Source line: 383294
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002e9268(int param_1)

{
  if (*(char *)(param_1 + 0x34) != '\0') {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    FUN_0032c348(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0xcc) = 0;
    FUN_00342ed0(param_1 + 0xb8);
    FUN_00136cc8(param_1 + 0x44);
    FUN_0020aedc(param_1);
    return;
  }
  return;
}
