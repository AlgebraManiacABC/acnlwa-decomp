/**
 * FUN_00335678.c
 * Source line: 436107
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 * FUN_00335678(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0024dcc0(param_1 + 0x10);
  iVar1 = FUN_0020cbf0(iVar1 + 0x1228);
  FUN_0020c500(iVar1);
  FUN_006bc04c(iVar1 + 0x6b88);
  *(undefined4 *)(iVar1 + -0x1230) = 0;
  *(undefined4 *)(iVar1 + -0x122c) = 0;
  *(undefined4 *)(iVar1 + -0x1234) = 0;
  *(undefined4 *)(iVar1 + -0x1238) = 0;
  return (undefined4 *)(iVar1 + -0x1238);
}
