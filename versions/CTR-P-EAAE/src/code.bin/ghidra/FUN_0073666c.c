/**
 * FUN_0073666c.c
 * Source line: 1091791
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined2 FUN_0073666c(int *param_1)

{
  undefined2 uVar1;
  
  if (((char)param_1[1] == '\0') || (*(char *)(*param_1 + 0x44) != '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(*param_1 + 0x1a);
  }
  return uVar1;
}
