/**
 * FUN_007335bc.c
 * Source line: 1088995
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_007335bc(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar2 = FUN_0073264c();
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar1 = FUN_0073264c();
    uVar2 |= uVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = FUN_0073264c();
    uVar2 |= uVar1;
  }
  return uVar2;
}
