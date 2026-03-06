/**
 * FUN_002fbd54.c
 * Source line: 394509
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_002fbd54(short *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 == 0) || (iVar1 = FUN_0076c6d4(param_1 + 0xb), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
