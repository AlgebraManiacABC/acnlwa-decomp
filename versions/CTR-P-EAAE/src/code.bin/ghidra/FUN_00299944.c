/**
 * FUN_00299944.c
 * Source line: 339453
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00299944(int param_1)

{
  *(undefined1 *)(param_1 + 0x920) = 0;
  FUN_00299984(param_1 + 0x224,1);
  FUN_0029977c(param_1 + 0x224);
  *(undefined1 *)(param_1 + 0x920) = 1;
  *(undefined1 *)(param_1 + 0x91c) = 0;
  *(uint *)(param_1 + 0x900) = *(uint *)(param_1 + 0x900) & 0xfffffff7;
  return;
}
