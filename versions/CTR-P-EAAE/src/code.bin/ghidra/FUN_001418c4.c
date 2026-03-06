/**
 * FUN_001418c4.c
 * Source line: 154084
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_001418c4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 0xc + 0xc);
  }
  return uVar1;
}
