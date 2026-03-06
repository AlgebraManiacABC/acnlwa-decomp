/**
 * FUN_00711290.c
 * Source line: 1067117
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00711290(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002fb338(param_1 + 8);
  if ((iVar1 == 0) || (iVar1 = FUN_007596ac(param_1 + 8,1), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
