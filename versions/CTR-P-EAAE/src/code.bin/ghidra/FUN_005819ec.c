/**
 * FUN_005819ec.c
 * Source line: 827194
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_005819ec(void)

{
  int iVar1;
  
  iVar1 = FUN_0052f248();
  iVar1 = FUN_0052f248(iVar1 + 0x10);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  return;
}
