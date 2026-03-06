/**
 * FUN_003009a8.c
 * Source line: 398583
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_003009a8(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 10) {
    param_1 = param_2 * 0x2518 + param_1;
    if ((param_1 != 0) && (iVar1 = FUN_002fe470(param_1), iVar1 != 0)) {
      return param_1;
    }
  }
  return 0;
}
