/**
 * FUN_0045016c.c
 * Source line: 616160
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_0045016c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  iVar1 = FUN_00426db4(param_1 + 9,0xffffffff);
  FUN_0053b844(iVar1 + 0xc);
  iVar1 = FUN_00428ce0(iVar1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x5f0) = 0;
  *(undefined4 *)(iVar1 + 0x5f4) = 0;
  FUN_0044ff0c(iVar1 + -0x40,param_2);
  return iVar1 + -0x40;
}
