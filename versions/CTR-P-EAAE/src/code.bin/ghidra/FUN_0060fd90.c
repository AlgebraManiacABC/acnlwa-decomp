/**
 * FUN_0060fd90.c
 * Source line: 925513
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0060fd90(int param_1)

{
  FUN_004b9b64(param_1 + 0x178,param_1 + 0x3b4);
  FUN_005697e0(0,param_1 + 0x3b4);
  *(byte *)(*(int *)(param_1 + 0x198) + 0xb7) =
       *(byte *)(*(int *)(param_1 + 0x198) + 0xb7) & 0xfe | 1;
  FUN_002f6e14();
  FUN_002f6b14(param_1 + 0x1c58);
  return;
}
