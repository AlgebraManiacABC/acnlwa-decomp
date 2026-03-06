/**
 * FUN_00723ad4.c
 * Source line: 1078512
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00723ad4(int param_1)

{
  undefined4 uVar1;
  
  if (((*(byte *)(param_1 + 0x79) & 1) == 0) && (*(int *)(param_1 + 0xd0) < 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
