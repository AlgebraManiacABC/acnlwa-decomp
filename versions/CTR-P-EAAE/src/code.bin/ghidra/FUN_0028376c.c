/**
 * FUN_0028376c.c
 * Source line: 328511
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_0028376c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = FUN_005e3194(param_1 + 0x10e);
  *(undefined ***)(iVar1 + -0x13c) = &PTR_LAB_008f7224;
  iVar1 = FUN_0056988c(iVar1 + -0x30);
  iVar1 = FUN_0056988c(iVar1 + -0x28);
  iVar1 = FUN_002f7710(iVar1 + -0xe4);
  iVar1 = FUN_003432e4(iVar1 + -0x134);
  iVar1 = FUN_0056988c(iVar1 + -0x28);
  iVar1 = FUN_0056988c(iVar1 + -0x28);
  iVar1 = FUN_0056988c(iVar1 + -0x28);
  iVar1 = thunk_FUN_00569480(iVar1 + -0x14c);
  return iVar1 + -4;
}
