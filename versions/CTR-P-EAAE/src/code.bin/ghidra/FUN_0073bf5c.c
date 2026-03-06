/**
 * FUN_0073bf5c.c
 * Source line: 1095460
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined2 FUN_0073bf5c(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = *(undefined2 *)(*(int *)(param_1 + 0xc) + 0xc);
  }
  return uVar1;
}
