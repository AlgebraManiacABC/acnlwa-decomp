/**
 * FUN_004a6510.c
 * Source line: 680822
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_004a6510(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)*param_1 == -0x80000000) {
    uVar1 = (*pcRam009750dc)();
  }
  else if (*(int *)*param_1 == 0x40000000) {
    uVar1 = (*pcRam009750e0)();
  }
  return uVar1;
}
