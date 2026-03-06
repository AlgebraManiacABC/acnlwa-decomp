/**
 * FUN_0052bb0c.c
 * Source line: 770963
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_0052bb0c(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(code **)(param_1 + 0xc) == FUN_0052b610) && (*(int *)(param_1 + 0x10) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if ((*(code **)(param_1 + 0xc) == FUN_0052b4e8) && (*(int *)(param_1 + 0x10) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 | uVar2;
}
