/**
 * FUN_0022c87c.c
 * Source line: 282917
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_0022c87c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_008ee268;
  iVar1 = FUN_0056988c(param_1 + 0x76);
  iVar1 = FUN_0056988c(iVar1 + -0x28);
  *(undefined **)(iVar1 + -0x1b0) = &DAT_008ebb64;
  iVar1 = FUN_0056988c(iVar1 + -0x38);
  iVar1 = FUN_0056988c(iVar1 + -0x28);
  iVar1 = thunk_FUN_00569480(iVar1 + -0x14c);
  return iVar1 + -4;
}
