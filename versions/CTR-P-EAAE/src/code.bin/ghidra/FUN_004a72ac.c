/**
 * FUN_004a72ac.c
 * Source line: 681739
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_004a72ac(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)*param_1 == -0x80000000) {
    uVar1 = (*pcRam00975114)();
  }
  else if (*(int *)*param_1 == 0x40000000) {
    uVar1 = (*pcRam00975118)();
  }
  return uVar1;
}
