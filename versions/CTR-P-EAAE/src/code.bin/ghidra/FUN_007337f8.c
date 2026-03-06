/**
 * FUN_007337f8.c
 * Source line: 1089151
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_007337f8(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar2 = FUN_0073264c();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = FUN_0073264c();
    uVar2 |= uVar1;
  }
  return uVar2;
}
