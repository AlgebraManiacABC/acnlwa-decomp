/**
 * FUN_0052a870.c
 * Source line: 770274
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_0052a870(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(code **)(param_1 + 0xc) == FUN_00529f2c) && (*(int *)(param_1 + 0x10) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if ((*(code **)(param_1 + 0xc) == FUN_00529e04) && (*(int *)(param_1 + 0x10) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 | uVar2;
}
