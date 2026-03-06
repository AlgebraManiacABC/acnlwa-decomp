/**
 * FUN_0026cab0.c
 * Source line: 316527
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0026cab0(void)

{
  int iVar1;
  
  iVar1 = FUN_005673c8();
  iVar1 = FUN_004edd3c(iVar1 + 8);
  *(undefined2 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x20) = 0x3f800000;
  return;
}
