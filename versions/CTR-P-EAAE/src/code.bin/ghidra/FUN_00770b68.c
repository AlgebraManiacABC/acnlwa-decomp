/**
 * FUN_00770b68.c
 * Source line: 1133308
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_00770b68(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(code **)(param_1 + 0xc) == FUN_006f57bc) && (*(int *)(param_1 + 0x10) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if ((*(code **)(param_1 + 0xc) == FUN_006f56ec) && (*(int *)(param_1 + 0x10) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 | uVar2;
}
