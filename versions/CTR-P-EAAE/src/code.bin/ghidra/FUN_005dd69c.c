/**
 * FUN_005dd69c.c
 * Source line: 888928
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005dd69c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_00908dd4;
  param_1[1] = 0;
  iVar1 = FUN_00810f00(param_1 + 2);
  iVar1 = FUN_00811190(iVar1 + 0x2c);
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  iVar1 = FUN_0081e8d0(iVar1 + 0x18);
  *(undefined1 *)(iVar1 + 0x2c) = 3;
  return;
}
