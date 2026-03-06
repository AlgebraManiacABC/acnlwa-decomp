/**
 * FUN_00736664.c
 * Source line: 1091775
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined2 FUN_00736664(int param_1)

{
  undefined2 uVar1;
  
  if ((*(char *)(param_1 + 0xc) == '\0') || (*(char *)(*(int *)(param_1 + 8) + 0x44) != '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(*(int *)(param_1 + 8) + 0x1a);
  }
  return uVar1;
}
