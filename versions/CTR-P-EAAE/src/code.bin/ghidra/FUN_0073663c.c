/**
 * FUN_0073663c.c
 * Source line: 1091759
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined2 FUN_0073663c(int *param_1)

{
  undefined2 uVar1;
  
  if (((char)param_1[1] == '\0') || (*(char *)(*param_1 + 0x44) != '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(*param_1 + 0x18);
  }
  return uVar1;
}
