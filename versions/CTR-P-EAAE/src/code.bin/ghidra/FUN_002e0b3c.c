/**
 * FUN_002e0b3c.c
 * Source line: 377987
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_002e0b3c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008f35dc;
  FUN_005694c8(param_1 + 8);
  FUN_005694c8(param_1 + 0x12);
  FUN_005694c8(param_1 + 0x1c);
  FUN_005694c8(param_1 + 0x26);
  iVar1 = FUN_005e3194(param_1 + 0x10f);
  *(undefined **)(iVar1 + -0x38) = &UNK_00909b28;
  iVar1 = FUN_0056988c(iVar1 + -0x68);
  iVar1 = FUN_0056988c(iVar1 + -0x28);
  iVar1 = FUN_0056988c(iVar1 + -0x28);
  iVar1 = thunk_FUN_00569480(iVar1 + -0x14c);
  iVar1 = FUN_00569b28(iVar1 + -0x158);
  FUN_002b6ef8(iVar1 + -0xe0);
  return;
}
