/**
 * FUN_001a4274.c
 * Source line: 211503
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_001a4274(int param_1)

{
  undefined1 auStack_20 [24];
  
  *(undefined4 *)(param_1 + 0x170) = 0;
  __aeabi_memset(param_1 + 0x188,0x20,1);
  FUN_001a314c(param_1,auStack_20);
  FUN_001a1abc(param_1,auStack_20,(int)*(char *)(param_1 + 0x136));
  return;
}
