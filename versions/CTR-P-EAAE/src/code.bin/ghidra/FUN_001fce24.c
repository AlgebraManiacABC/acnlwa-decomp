/**
 * FUN_001fce24.c
 * Source line: 259885
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_001fce24(int param_1)

{
  *(uint *)(param_1 + 0x497c) = *(uint *)(param_1 + 0x497c) | 8;
  FUN_002ccc70(param_1 + 0x48a8,0,1);
  FUN_002ccc70(param_1 + 0x48a8,1);
  FUN_00583238(*(undefined4 *)(param_1 + 0x53fc),param_1 + 0x5600);
  *(undefined4 *)(param_1 + 0x42ec) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x53f0) = 0;
  return;
}
