/**
 * FUN_007126dc.c
 * Source line: 1067860
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_007126dc(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(code **)(param_1 + 0xc) == FUN_00208714) && (*(int *)(param_1 + 0x10) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if ((*(code **)(param_1 + 0xc) == FUN_002083e8) && (*(int *)(param_1 + 0x10) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 | uVar2;
}
