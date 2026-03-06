/**
 * FUN_001afc2c.c
 * Source line: 217907
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_001afc2c(int param_1)

{
  *(undefined1 *)(param_1 + 0x920) = 0;
  FUN_00299984(param_1 + 0x224,1);
  FUN_0029977c(param_1 + 0x224);
  *(undefined1 *)(param_1 + 0x920) = 1;
  FUN_00299984(param_1 + 0x224,0);
  *(undefined4 *)(param_1 + 0x94c) = *(undefined4 *)(param_1 + 0xae8);
  return;
}
