/**
 * FUN_00760638.c
 * Source line: 1120113
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_00760638(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xf0) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x1028);
  }
  return uVar1;
}
