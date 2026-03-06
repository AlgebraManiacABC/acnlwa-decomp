/**
 * FUN_0020e0d4.c
 * Source line: 269638
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_0020e0d4(undefined4 *param_1)

{
  int iVar1;
  
  param_1[1] = 0xffffffff;
  *param_1 = &DAT_008ed8f4;
  iVar1 = FUN_005b2480(param_1 + 0x1a);
  *(undefined4 *)(iVar1 + 0xd20) = 0;
  *(undefined4 *)(iVar1 + 0xd24) = 0;
  iVar1 = FUN_005673c8(iVar1 + 0xd28);
  return iVar1 + -0xd90;
}
