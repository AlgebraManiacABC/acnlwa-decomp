/**
 * FUN_00585fac.c
 * Source line: 832206
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00585fac(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_006a5b68();
  if (iVar1 == 0) {
    *(undefined1 *)((int)param_1 + 0x19) = 0;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x19) = 1;
    (**(code **)(*param_1 + 4))(param_1);
    uVar2 = FUN_00584134();
    FUN_0058c514(uVar2,0x24);
  }
  uRam0094e4a8 = 1;
  return;
}
