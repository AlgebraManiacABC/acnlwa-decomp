/**
 * FUN_0044e728.c
 * Source line: 614600
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_0044e728(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_00900ccc;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = FUN_00459f2c(param_1 + 3);
  iVar1 = FUN_00459ca8(iVar1 + 0xd0);
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(int *)(iVar1 + 0x44) = iVar1 + -0xdc;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  iVar1 = FUN_00426784(iVar1 + 0x50);
  return iVar1 + -300;
}
