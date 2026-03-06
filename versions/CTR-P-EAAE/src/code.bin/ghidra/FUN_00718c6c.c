/**
 * FUN_00718c6c.c
 * Source line: 1071751
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_00718c6c(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(code **)(param_1 + 0xc) == FUN_0026e7d0) && (*(int *)(param_1 + 0x10) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if ((*(code **)(param_1 + 0xc) == FUN_0026e618) && (*(int *)(param_1 + 0x10) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 | uVar2;
}
