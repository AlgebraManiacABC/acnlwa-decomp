/**
 * FUN_00217648.c
 * Source line: 273905
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00217648(void)

{
  int iVar1;
  
  iVar1 = FUN_00125e3c();
  *(undefined4 *)(iVar1 + 0x14c) = 0;
  iVar1 = FUN_00125aec(iVar1 + 0x150);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  iVar1 = FUN_005e3128(iVar1 + 0x2c,10);
  *(undefined4 *)(iVar1 + 0xc4) = 0;
  iVar1 = FUN_00125aec(iVar1 + 200);
  iVar1 = FUN_00125aec(iVar1 + 0x28);
  *(undefined1 *)(iVar1 + 0x2f) = 0;
  return;
}
